#include "queen.h"

queen::queen(int x, int y, int colour) :
	Piece(x, y, colour)
{

}

void queen::setMoves()
{
	// set bishop and rook moves for queen moves
	// https://www.chess.com/terms/chess-queen#howqueenmoves

	setBishopMoves(this->moves);
	setRookMoves(this->moves);

}
