#include "mypainter.h"

MyPainter::MyPainter(QWidget *parent)
    : QWidget{parent}
{
    this->setMouseTracking(true);
}

void MyPainter::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    QColor SoulSkyBlue(198, 226, 255);

    pen.setColor(SoulSkyBlue);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);

    painter.setPen(pen);
    painter.setBrush(QBrush(SoulSkyBlue));

    for(auto &item: ptr_figures)
        {
            item->drawCustomFigure(painter);
        }

    QColor Lilac(225,196,255);
    pen.setColor(Lilac);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);

    painter.setBrush(QBrush(Lilac));

    for(auto &item: ptr_figures)
    {
        if(item->checkInside(mousePosition))
        {
            item->drawCustomFigure(painter);
        }
    }
}

void MyPainter::setFigures(std::vector<std::unique_ptr<AbstractFigure>> &&_ptr_figures)
{
    ptr_figures = std::move(_ptr_figures);
}

void MyPainter::mouseMoveEvent(QMouseEvent * event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        for(auto& item: ptr_figures)
        {
            if(item->checkInside(mousePosition))
                item->SetXYCoordinates(mousePosition);
        }
    }

    if(!(event->buttons() & Qt::LeftButton))
    {

        for(auto& item: ptr_figures)
            if(item->checkInside(mousePosition))
                QToolTip::showText(this->mapToGlobal(mousePosition), item->figureDescription());

    }

    mousePosition = event->pos();
    update();
}

void MyPainter::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::RightButton)
    {
        QMenu* figureMenu = new QMenu();

        figureMenu->addAction("Delete", this, SLOT(deleteFigure()));
        figureMenu->popup(this->mapToGlobal(mousePosition));
    }
}

void MyPainter::deleteFigure()
{
    for(size_t index = 0; index < ptr_figures.size(); index++)
    {
        if(ptr_figures.at(index)->checkInside(mousePosition))
            ptr_figures.erase(ptr_figures.begin() + index);
    }
}
