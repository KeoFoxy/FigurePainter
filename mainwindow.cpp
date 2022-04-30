#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "figures.h"
#include "mypainter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Rectangle rect;
    Circle circle;
    Triangle trial;

    MyPainter::absFigure(rect);
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
void MainWindow::drawAbsFigure(std::vector<AbstractFigure> &figure)
{
    for(const auto items: figure)
}

*/





