#pragma once
#include "Piece.h"
class rook :
    public Piece
{
public:
    rook(int x, int y, int colour);
    void setMoves();
    ~rook();
};

