#ifndef MYPAINTER_H
#define MYPAINTER_H

#include <QColor>
#include <QGraphicsSceneMouseEvent>
#include <QMenu>
#include <QPainter>
#include <QWidget>

#include "figures.h"

class MyPainter : public QWidget {
    Q_OBJECT
public:
    std::vector<std::unique_ptr<AbstractFigure>> ptr_figures;
    QPoint mousePosition;

    explicit MyPainter(QWidget *parent = nullptr);

    void absFigure(const std::unique_ptr<AbstractFigure> &figure);
    void setFigures(std::vector<std::unique_ptr<AbstractFigure>> &&_ptr_figures);

protected:
    void paintEvent(QPaintEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;
    void mousePressEvent(QMouseEvent *) override;

    size_t hoverFigureIndex = 0;

protected slots:
    void deleteFigure();
signals:
};

#endif // MYPAINTER_H
