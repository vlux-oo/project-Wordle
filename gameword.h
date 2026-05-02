#ifndef GAMEWORD_H
#define GAMEWORD_H
#include <QString>
#define SIZE_ARR_WORDS 6
#include "baseofwords.h"

class GameWord
{
private:
    QString word;
    QString savewords[SIZE_ARR_WORDS];
public:
    GameWord(int len, BaseOfWords &bd);
    void put_sym(int idx_str, int idx_sym, char sym);
    int save_word(int idx_str);
};

#endif // GAMEWORD_H
