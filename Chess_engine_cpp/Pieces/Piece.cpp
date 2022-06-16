#include "Piece.h"

Piece::Piece(int x, int y, int colour)
{
	setPosition(x, y);
	setColour(colour);
}

void Piece::setPosition(int x, int y)
{
	this->position.first = x;
	this->position.second = y;
}

void Piece::setColour(int colour)
{
	this->colour = colour;
}
