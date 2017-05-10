#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "minions.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(0,0,1000,1000))
{
    ui->setupUi(this);
    ui->graphicsView->setScene(scene);
    placebase= new QGraphicsPixmapItem(QPixmap(":/res/place.png"));

            scene->addItem(placebase);
            placebase->setPos(0, 0);

 // placebase->setPixmap(QPixmap(":res/New piskel.png"));
 //  placebase->setPos(0, 0);
    scene->addItem(minion[2].picture);
    minion[2].picture->setPos(0,0);



}

MainWindow::~MainWindow()
{
    delete ui;
}

