#pragma once
#include <vector>
#include <utility>


enum pieceCategory {
	pawnType,
	rookType,
	knightType,
	bishopType,
	queenType,
	kingType
};

enum  colours
{
	white,
	black
};

class Piece
{
protected:
	pieceCategory category;

	// white = 0, black = 1
	colours colour;
	
	// (x,y) position; x=row, y=colum; x=first, y=second
	std::pair<int, int> position;


public:

	// move set, will be in the form of
	// ex for knight (x = row change, y = height change):
	// https://www.chess.com/terms/chess-knight#howtheknightmoves
	// [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, -2), (1, 2), (-1, 2), (-1, -2) ]
	std::vector<std::pair<int, int>> moves;

	Piece(int x, int y, colours colour);
	~Piece();

	std::pair<int, int> getPosition();
	void setPosition(int x, int y);

	int getColour();
	void setColour(colours colour);

	virtual void setMoves() = 0;

};

#define BOARD_DIMENSION 8

void setBishopMoves(std::vector<std::pair<int, int>>& moves);
void setRookMoves(std::vector<std::pair<int, int>>& moves);

