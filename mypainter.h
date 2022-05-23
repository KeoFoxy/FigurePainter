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
    QPoint mousePosition;

    explicit MyPainter(QWidget *parent = nullptr);

    void absFigure(const std::unique_ptr<AbstractFigure> &figure);
    void setFigures(std::vector<std::unique_ptr<AbstractFigure>> &&_ptr_figures);

protected:
    void paintEvent(QPaintEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;
    void mousePressEvent(QMouseEvent*) override;


signals:

};

#endif // MYPAINTER_H
