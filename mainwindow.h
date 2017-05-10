#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <minion.h>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>
#include <QKeyEvent>
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
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsPixmapItem *placebase;


};
void battle();

#endif // MAINWINDOW_H
