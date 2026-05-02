#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlQuery>
#include <QKeyEvent>
#include "baseofwords.h"
enum GameStage {MENU, RUNNING_GAME, END_GAME};
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Game : public QMainWindow
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();
    void onoff(int nstr);
    void marksy(int curl);
    void enter();
    bool checkwo(int curll);
    void clearg();
    bool isem();

private:
    int gamemod;
    GameStage gamestage;
    Ui::MainWindow *ui;
    QLineEdit* l4[6][4];
    QLineEdit* l5[6][5];
    QLineEdit* l6[6][6];
    int curl;
    QString curw;
    void setupdb();
};
#endif // GAME_H
