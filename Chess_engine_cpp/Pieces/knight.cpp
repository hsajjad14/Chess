#include "knight.h"

knight::knight(int x, int y, int colour):
	Piece(x, y, colour)
{

}

void knight::setMoves()
{
	// https://www.chess.com/terms/chess-knight#howtheknightmoves
	//[(2, 1), (2, -1), (-2, 1), (-2, -1), (1, -2), (1, 2), (-1, 2), (-1, -2) ]
	this->moves.push_back(std::make_pair(2,1));
	this->moves.push_back(std::make_pair(2, -1));
	this->moves.push_back(std::make_pair(-2, 1));
	this->moves.push_back(std::make_pair(-2, -1));
	this->moves.push_back(std::make_pair(1, -2));
	this->moves.push_back(std::make_pair(1, 2));
	this->moves.push_back(std::make_pair(-1, 2));
	this->moves.push_back(std::make_pair(-1, -2));
}
