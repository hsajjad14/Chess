#include "rook.h"

rook::rook(int x, int y, int colour):
	Piece(x, y, colour)
{

}

void rook::setMoves()
{
	setRookMoves(this->moves);
}

void setRookMoves(std::vector<std::pair<int, int>>& moves) {
	// https://www.chess.com/terms/chess-rook#howrookmoves
	for (int i = 1; i < BOARD_DIMENSION; i++) {

		// move vertical (up/down)
		moves.push_back(std::make_pair(i, 0));
		moves.push_back(std::make_pair(-i, 0));

		// move horizontal (right/left)
		moves.push_back(std::make_pair(0, i));
		moves.push_back(std::make_pair(0, -i));

	}

}
