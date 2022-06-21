#pragma once
#include "Piece.h"
class queen :
    public Piece
{
    queen(int x, int y, int colour);
    void setMoves();
    ~queen();
};

