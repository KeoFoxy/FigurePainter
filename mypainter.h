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
    std::vector<AbstractFigure *> ptr_figures;

    explicit MyPainter(QWidget *parent = nullptr);

    void absFigure(AbstractFigure& figure);
    void drawAbsFigure(AbstractFigure& figure);

    std::vector<AbstractFigure *> setFigures(std::vector<AbstractFigure *> _ptr_figures);

protected:
    void paintEvent(QPaintEvent*) override;

signals:

};

#endif // MYPAINTER_H
