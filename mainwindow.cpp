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

    Rectangle *rect = new Rectangle;
    Circle *circle = new Circle;
    Triangle *trial = new Triangle;

    std::vector<AbstractFigure *> prt_figures = {rect, circle, trial};

    ui->Painter->setFigures(prt_figures);
}

MainWindow::~MainWindow()
{
    delete ui;
}


