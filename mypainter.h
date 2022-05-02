#ifndef MYPAINTER_H
#define MYPAINTER_H

#include <QWidget>
#include <QPainter>
#include <QColor>

#include "figures.h"

class MyPainter : public QWidget
{
    Q_OBJECT
public:
    std::vector<std::unique_ptr<AbstractFigure>> ptr_figures;

    explicit MyPainter(QWidget *parent = nullptr);

    void absFigure(std::unique_ptr<AbstractFigure> figure);
    //void drawAbsFigure(AbstractFigure& figure);

    void setFigures(std::vector<std::unique_ptr<AbstractFigure>> _ptr_figures);

protected:
    void paintEvent(QPaintEvent*) override;

public:
    MyPainter(const MyPainter&) = delete;
    MyPainter& operator=(const MyPainter&) =delete;
    MyPainter(MyPainter &&_ptr_figures)
    {
        this->ptr_figures = std::move(_ptr_figures.ptr_figures);
    }

signals:

};

#endif // MYPAINTER_H
