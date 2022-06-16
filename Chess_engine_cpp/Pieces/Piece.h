#pragma once
#include <vector>
#include <utility>

class Piece
{
protected:
	// white = 0, black = 1
	int colour;
	
	// (x,y) position; x=row, y=colum; x=first, y=second
	std::pair<int, int> position;


public:

	// move set, will be in the form of
	// ex for knight (x = row change, y = height change):
	// https://www.chess.com/terms/chess-knight#howtheknightmoves
	// [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, -2), (1, 2), (-1, 2), (-1, -2) ]
	std::vector<std::pair<int, int>> moves;

	Piece(int x, int y, int colour);
	~Piece();

	std::pair<int, int> getPosition();
	void setPosition(int x, int y);

	int getColour();
	void setColour(int colour);

	virtual void setMoves() = 0;

};

