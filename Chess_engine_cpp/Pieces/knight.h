#pragma once
#include "Piece.h"
class knight :
    public Piece
{
public:
    knight(int x, int y, int colour);
    void setMoves();
    ~knight();
};

