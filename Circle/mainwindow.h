#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//#include <QUrl>
#include <QScreen>
#include <QMainWindow>
//#include <QMediaPlayer>
//#include <QVideoWidget>

namespace Ui {
class MainWindow;
}
/*
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
};

#endif // MAINWINDOW_H
*/
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtoncalculation_clicked();

    void on_pushButtoncalculation_2_clicked();

    void on_pushButtoncalculation_3_clicked();

    void on_pushButtoncalculation_4_clicked();

    //void on_tab_5_customContextMenuRequested(const QPoint &pos);

    //void on_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
