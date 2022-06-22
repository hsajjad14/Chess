#pragma once
#include "Piece.h"
class knight :
    public Piece
{
public:
    knight(int x, int y, colours colour);
    void setMoves();
    ~knight();
};

