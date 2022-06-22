#include "queen.h"

queen::queen(int x, int y, colours colour) :
	Piece(x, y, colour)
{
	category = queenType;
}

void queen::setMoves()
{
	// set bishop and rook moves for queen moves
	// https://www.chess.com/terms/chess-queen#howqueenmoves

	setBishopMoves(this->moves);
	setRookMoves(this->moves);

}
