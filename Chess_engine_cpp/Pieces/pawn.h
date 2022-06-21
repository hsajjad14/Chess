#pragma once
#include "Piece.h"
class pawn :
    public Piece
{
public:

    pawn(int x, int y, int colour);

    void setMoves();

    ~pawn();
};


