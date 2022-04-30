#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <vector>

#include "figures.h"
#include "mypainter.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   // std::vector<AbstractFigure> ptr_figures;

   // void absFigure(std::vector<AbstractFigure> &figure);
   // void drawAbsFigure(std::vector<AbstractFigure> &figure);
   friend void MyPainter::absFigure(AbstractFigure &figure);

private:
    Ui::MainWindow *ui;

//protected:
    //void paintEvent(QPaintEvent*) override;
};
#endif // MAINWINDOW_H
