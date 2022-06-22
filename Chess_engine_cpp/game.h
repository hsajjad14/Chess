#pragma once
#include "Board/board.h"
// #include "Pieces/Piece.h" // because everything else is already importing it
#include "Pieces/bishop.h"
#include "Pieces/king.h"
#include "Pieces/knight.h"
#include "Pieces/pawn.h"
#include "Pieces/queen.h"
#include "Pieces/rook.h"



class game
{
private:
	int players;

public:
	game();

	// game runner
	void run();

	// generate all pieces and fill the board
	static void fillBoardWithPieces(board &board);
	~game();
};

