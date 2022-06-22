#pragma once
#include "Piece.h"
class bishop :
    public Piece
{

public:
    bishop(int x, int y, colours colour);
    void setMoves();
    ~bishop();
};

