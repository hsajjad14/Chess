#include "pawn.h"

pawn::pawn(int x, int y, colours colour):
	Piece(x,y,colour)
{
	category = pawnType;

}

void pawn::setMoves() {
	// pawn's movements:
	// https://www.chess.com/terms/chess-pawn#pawnmoves

	// first move, move up twice
	this->moves.push_back(std::make_pair(2, 0));

	// regular move forward
	this->moves.push_back(std::make_pair(1, 0));

	// attacking moves
	this->moves.push_back(std::make_pair(1, 1));
	this->moves.push_back(std::make_pair(1, -1));
}
