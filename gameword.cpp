#include "gameword.h"
GameWord::GameWord(int len, BaseOfWords &bd)
{
    word = bd.take_a_word(len);
    for (int i = 0; i < SIZE_ARR_WORDS; i++) {
        savewords[i] = QString();
        savewords[i].resize(SIZE_ARR_WORDS);
    }
}

void GameWord::put_sym(int istr, int isym, char sym)
{
    savewords[istr][isym] = sym;
}
int GameWord::save_word(int idx_str)
{
    for (int i = 0; i <= word.size(); i++)
    {   if (savewords[idx_str][i] == 0)
        return 0;
    }
    if (savewords[idx_str] == word)
        return 1;
    else
        return 2;
}
