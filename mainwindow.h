#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <minion.h>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>
#include <QKeyEvent>
#include <QPushButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<minion> list;
public slots:
    virtual void mousePressEvent(QMouseEvent *e);
private slots:

    void on_startgame_clicked();


    void on_normal_clicked();

    void on_hard_clicked();

    void on_veryhard_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsPixmapItem *placebase;
    int nowbattletime=0;
    int miniondata[5];
    QGraphicsPixmapItem *minidatapicture;



};
void battle();

#endif // MAINWINDOW_H
