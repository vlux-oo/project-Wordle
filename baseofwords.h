#ifndef BASEOFWORDS_H
#define BASEOFWORDS_H
#include <QtSql>
#include <QSqlQuery>
#include <stdlib.h>
class BaseOfWords
{
private:
    QSqlDatabase bd;
public:
    BaseOfWords();
    QString take_a_word(int kol);
};

#endif // BASEOFWORDS_H
