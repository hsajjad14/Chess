#include "king.h"

king::king(int x, int y, int colour)
{

}

void king::setMoves()
{
	// https://www.chess.com/terms/chess-king#howkingmoves
	this->moves.push_back(std::make_pair(1, 0));
	this->moves.push_back(std::make_pair(1, -1));
	this->moves.push_back(std::make_pair(1, 1));

	this->moves.push_back(std::make_pair(0, 1));
	this->moves.push_back(std::make_pair(0, -1));

	this->moves.push_back(std::make_pair(-1, 0));
	this->moves.push_back(std::make_pair(-1, -1));
	this->moves.push_back(std::make_pair(-1, 1));

}
