#pragma once
#include "Piece.h"
class rook :
    public Piece
{
public:
    rook(int x, int y, colours colour);
    void setMoves();
    ~rook();
};

