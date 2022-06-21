#include "bishop.h"

bishop::bishop(int x, int y, int colour) :
	Piece(x, y, colour)
{
}

void bishop::setMoves()
{
	setBishopMoves(this->moves);
}

void setBishopMoves(std::vector<std::pair<int, int>>& moves) {
	//https://www.chess.com/terms/chess-bishop#howbishopmoves

	for (int i = 1; i < BOARD_DIMENSION; i++) {
		// up and left
		moves.push_back(std::make_pair(i, -i));

		// up and right
		moves.push_back(std::make_pair(i, i));

		// down and left
		moves.push_back(std::make_pair(-i, -i));

		// down and right
		moves.push_back(std::make_pair(-i, i));
	}

}
