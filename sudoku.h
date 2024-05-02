#ifndef SUDOKU_SUDOKU_H
#define SUDOKU_SUDOKU_H

#include "game.h"

class sudoku
{
public:
    sudoku();
    sudoku(const sudoku& other);
    ~sudoku();
    void show();
public: //CHANGE TO PRIVATE LATER!
    int** table;
    void construct();
    void puzzle();
    int* randomSet();
    bool safeCell(int number, int row, int column);
    bool fillSector(int i, int j);
    friend class game;
};



#endif //SUDOKU_SUDOKU_H
