#include "game.h"
#include "ui_game.h"

Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton1->setStyleSheet("background-color: #C5E0B4;");
    ui->pushButton2->setStyleSheet("background-color: #92D050;");
    ui->pushButton3->setStyleSheet("background-color: yellow;");
    ui->pushButton4->setStyleSheet("background-color: red;");
    ui->pushButton5->setStyleSheet("background-color: #92D050;");
    ui->pushButton6->setStyleSheet("background-color: #92D050;");
    ui->pushButton7->setStyleSheet("background-color: #92D050;");
    ui->pushButton8->setStyleSheet("background-color: #92D050;");
    ui->pushButton9->setStyleSheet("background-color: red;");
    this->setStyleSheet("background-color: #8FAADC;");

    QLineEdit* _l5[6][5] =
    {
        {ui->lineEdit111, ui->lineEdit112, ui->lineEdit113, ui->lineEdit114, ui->lineEdit115},
        {ui->lineEdit121, ui->lineEdit122, ui->lineEdit123, ui->lineEdit124, ui->lineEdit125},
        {ui->lineEdit131, ui->lineEdit132, ui->lineEdit133, ui->lineEdit134, ui->lineEdit135},
        {ui->lineEdit141, ui->lineEdit142, ui->lineEdit143, ui->lineEdit144, ui->lineEdit145},
        {ui->lineEdit151, ui->lineEdit152, ui->lineEdit153, ui->lineEdit154, ui->lineEdit155},
        {ui->lineEdit161, ui->lineEdit162, ui->lineEdit163, ui->lineEdit164, ui->lineEdit165}
    };
    QLineEdit* _l4[6][4] =
    {
        {ui->lineEdit211, ui->lineEdit212, ui->lineEdit213, ui->lineEdit214},
        {ui->lineEdit221, ui->lineEdit222, ui->lineEdit223, ui->lineEdit224},
        {ui->lineEdit231, ui->lineEdit232, ui->lineEdit233, ui->lineEdit234},
        {ui->lineEdit241, ui->lineEdit242, ui->lineEdit243, ui->lineEdit244},
        {ui->lineEdit251, ui->lineEdit252, ui->lineEdit253, ui->lineEdit254},
        {ui->lineEdit261, ui->lineEdit262, ui->lineEdit263, ui->lineEdit264}
    };
    QLineEdit* _l6[6][6] =
    {
        {ui->lineEdit311, ui->lineEdit312, ui->lineEdit313, ui->lineEdit314, ui->lineEdit315, ui->lineEdit316},
        {ui->lineEdit321, ui->lineEdit322, ui->lineEdit323, ui->lineEdit324, ui->lineEdit325, ui->lineEdit326},
        {ui->lineEdit331, ui->lineEdit332, ui->lineEdit333, ui->lineEdit334, ui->lineEdit335, ui->lineEdit336},
        {ui->lineEdit341, ui->lineEdit342, ui->lineEdit343, ui->lineEdit344, ui->lineEdit345, ui->lineEdit346},
        {ui->lineEdit351, ui->lineEdit352, ui->lineEdit353, ui->lineEdit354, ui->lineEdit355, ui->lineEdit356},
        {ui->lineEdit361, ui->lineEdit362, ui->lineEdit363, ui->lineEdit364, ui->lineEdit365, ui->lineEdit366}
    };
    for(int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
            l4[i][j] = _l4[i][j];
        for (int j = 0; j < 5; j++)
            l5[i][j] = _l5[i][j];
        for (int j = 0; j < 6; j++)
            l6[i][j] = _l6[i][j];
    }
}

Game::~Game()
{
    delete ui;
}
int curp = 0;
int ti = 0;
void Game::on_pushButton1_clicked()
{
    if (gamemod == 4)
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if (gamemod == 5)
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if (gamemod == 6)
    {
        ui->stackedWidget->setCurrentIndex(3);
    }
    onoff(0);
    curl = 0;
    BaseOfWords bd;
    curw = bd.take_a_word(gamemod);
    qDebug() << curw;
    clearg();
}
void Game::on_pushButton2_clicked()
{
    gamemod = 4;
    curp = 2;
}
void Game::on_pushButton3_clicked()
{
    gamemod = 5;
    curp = 1;
}
void Game::on_pushButton4_clicked()
{
    gamemod = 6;
    curp = 3;
}
void Game::on_pushButton5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label->setText(QString::fromStdString("Вы не угадали слово!\n Слово: ") + curw);
}
void Game::on_pushButton6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label->setText(QString::fromStdString("Вы не угадали слово!\n Слово: ") + curw);
}
void Game::on_pushButton7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label->setText(QString::fromStdString("Вы не угадали слово!\n Слово: ") + curw);
}
void Game::on_pushButton8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    gamemod = 0;
}
void Game::on_pushButton9_clicked()
{
    exit(0);
}
void Game::marksy(int curll)
{
    for (int i = 0; i < gamemod; i++)
    {
        for (int j = 0; j < gamemod; j++)
        {
            if (gamemod == 6)
            {
                if (l6[curll][i]->text() == curw[j])
                {
                    if (i == j)
                        l6[curll][i]->setStyleSheet("background-color: #92D050;");
                    else
                        l6[curll][i]->setStyleSheet("background-color: yellow;");
                    continue;
                }
            }
            if (gamemod == 5)
            {
                if (l5[curll][i]->text() == curw[j])
                {
                    if (i == j)
                        l5[curll][i]->setStyleSheet("background-color: #92D050;");
                    else
                        l5[curll][i]->setStyleSheet("background-color: yellow;");
                    continue;
                }
            }
            if (gamemod == 4)
            {
                if (l4[curll][i]->text() == curw[j])
                {
                    if (i == j)
                        l4[curll][i]->setStyleSheet("background-color: #92D050;");
                    else
                        l4[curll][i]->setStyleSheet("background-color: yellow;");
                    continue;
                }
            }
        }
    }
}
void Game::onoff(int nstr)
{
    for(int i = 0; i < 6; i++)
    {
        if (i == nstr)
        {
            for (int j = 0; j < gamemod; j++)
            {
                if (gamemod == 6)
                {
                    l6[i][j]->setReadOnly(false);
                }
                if (gamemod == 5)
                {
                    l5[i][j]->setReadOnly(false);
                }
                if (gamemod == 4)
                {
                    l4[i][j]->setReadOnly(false);
                }
            }
            continue;
        }
        for (int j = 0; j < gamemod; j++)
        {
            if (gamemod == 6)
            {
                l6[i][j]->setReadOnly(true);
            }
            if (gamemod == 5)
            {
                l5[i][j]->setReadOnly(true);
            }
            if (gamemod == 4)
            {
                l4[i][j]->setReadOnly(true);
            }
        }
    }
}

void Game::enter()
{
    if (isem() == true)
    {
        marksy(curl);
        curl += 1;
        onoff(curl);
        if (checkwo(curl - 1) == true)
        {
            ui->stackedWidget->setCurrentIndex(4);
            ui->label->setText(QString::fromStdString("Вы угадали слово!\n Слово: ") + curw);
        }
        else if (curl > 5)
        {
            ui->stackedWidget->setCurrentIndex(4);
            ui->label->setText(QString::fromStdString("Вы не угадали слово!\n Слово: ") + curw);
        }
    }
}

bool Game::checkwo(int curll)
{
    QString str;
    for (int i = 0; i < gamemod; i++)
    {
        if (gamemod == 6)
        {
            str += l6[curll][i]->text();
        }
        if (gamemod == 5)
        {
            str += l5[curll][i]->text();
        }
        if (gamemod == 4)
        {
            str += l4[curll][i]->text();
        }
    }
    if (curw == str)
    {
        return true;
    }
    return false;
}
void Game::clearg()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < gamemod; j++)
        {
            if (gamemod == 6)
            {
                l6[i][j]->clear();
                l6[i][j]->setStyleSheet("background-color: white;");
            }
            if (gamemod == 5)
            {
                l5[i][j]->clear();
                l5[i][j]->setStyleSheet("background-color: white;");
            }
            if (gamemod == 4)
            {
                l4[i][j]->clear();
                l4[i][j]->setStyleSheet("background-color: white;");
            }
        }
    }
}
bool Game::isem()
{
    QString str;
    for (int i = 0; i < gamemod; i++)
    {
        if (gamemod == 6)
        {
            str += l6[curl][i]->text();
        }
        if (gamemod == 5)
        {
            str += l5[curl][i]->text();
        }
        if (gamemod == 4)
        {
            str += l4[curl][i]->text();
        }
    }
    if (str.size() < gamemod)
        return false;
    return true;
}

void Game::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        enter();
        event->accept();
    }
    else
    {
        QWidget::keyPressEvent(event);
    }
}





