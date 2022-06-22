#pragma once
#include "Piece.h"
class king :
    public Piece
{
public:
    king(int x, int y, int colour);
    void setMoves();
    ~king();
};

