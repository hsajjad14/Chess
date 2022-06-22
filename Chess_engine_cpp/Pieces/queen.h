#pragma once
#include "Piece.h"
class queen :
    public Piece
{
public:
    queen(int x, int y, colours colour);
    void setMoves();
    ~queen();
};

