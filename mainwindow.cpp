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

        std::unique_ptr<AbstractFigure> rect (new Rectangle(100, 200, 300, 400));
        std::unique_ptr<AbstractFigure> circle (new Circle(600, 600, 200, 200));
        std::unique_ptr<AbstractFigure> trial (new Triangle(100,200, 140, 304, 670, 360));


        std::vector<std::unique_ptr<AbstractFigure>> prt_figures;

        prt_figures.push_back(std::move(rect));
        prt_figures.push_back(std::move(circle));
        prt_figures.push_back(std::move(ear_1));

        ui->Painter->setFigures(std::move(prt_figures));
}

MainWindow::~MainWindow()
{
    delete ui;
}



//DRAW KITTEN!!!!!!!!
//DRAW KITTEN!!!!!!!!
//DRAW KITTEN!!!!!!!!
//DRAW KITTEN!!!!!!!!
//DRAW KITTEN!!!!!!!!
//DRAW KITTEN!!!!!!!!
