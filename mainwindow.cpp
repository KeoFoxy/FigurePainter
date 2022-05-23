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

        std::unique_ptr<AbstractFigure> rect (new Rectangle({QPoint(200, 800), QPoint(100, 650)}));
        std::unique_ptr<AbstractFigure> circle (new Circle(QPoint(800, 600), 250));
        std::unique_ptr<AbstractFigure> trial (new Triangle({ QPoint(100, 300), QPoint(400, 800), QPoint(400, 450) }));


        std::vector<std::unique_ptr<AbstractFigure>> prt_figures;

        prt_figures.push_back(std::move(rect));
        prt_figures.push_back(std::move(circle));
        prt_figures.push_back(std::move(trial));

        ui->Painter->setMouseTracking(true);

        ui->Painter->setFigures(std::move(prt_figures));
}

MainWindow::~MainWindow()
{
    delete ui;
}

