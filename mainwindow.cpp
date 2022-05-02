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

    /*
    Rectangle *rect = new Rectangle;
    Circle *circle = new Circle;
    Triangle *trial = new Triangle;
    */

        std::unique_ptr<Rectangle> rect (new Rectangle);
        std::unique_ptr<Circle> circle (new Circle);
        std::unique_ptr<Triangle> trial (new Triangle);


        std::vector<std::unique_ptr<AbstractFigure>> prt_figures;

        prt_figures.push_back(std::move(rect));
       // prt_figures.push_back(std::move(circle));
       // prt_figures.push_back(std::move(trial));

        ui->Painter->setFigures(std::move(prt_figures));
}

MainWindow::~MainWindow()
{
    delete ui;
}


