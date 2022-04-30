#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "figures.h"
#include "mypainter.h"
#include "abstractfigure.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Rectangle rect;
    Circle circle;
    Triangle trial;

    //absFigure(rect);

    //MyPainter::absFigure(rect);
   // ptr_figures.push_back(rect);
   // ptr_figures.push_back(circle);
   // ptr_figures.push_back(trial);

    //AbstractFigure a;

    //a.absFigure(rect);
   // drawAbsFigure(ptr_figures);

}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::absFigure(AbstractFigure &figure)
{
    QPainter painter;


    QPen pen;
    QColor DeepSkyBlue(115, 230, 255);


    pen.setColor(DeepSkyBlue);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);


    painter.begin(this);
    painter.setPen(pen);

    figure.drawCustomFigure(painter);

    painter.end();
}
*/
/*
void MainWindow::drawAbsFigure(std::vector<AbstractFigure> &figure)
{
    for(const auto items: figure)
}

*/





