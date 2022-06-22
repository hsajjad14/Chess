#pragma once
#include "Piece.h"
class king :
    public Piece
{
public:
    king(int x, int y, colours colour);
    void setMoves();
    ~king();
};

