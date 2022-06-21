#pragma once
#include "Piece.h"
class bishop :
    public Piece
{
    bishop(int x, int y, int colour);

    void setMoves();

    ~bishop();
};

