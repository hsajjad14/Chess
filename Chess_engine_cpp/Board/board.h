#pragma once
#include <utility>
#include "../Pieces/Piece.h"
#include <unordered_map>

struct tile
{
	colours colour;
	// x,y cordinates
	// std::pair<int, int> position;
	Piece* pieceOnTile;

};

class board
{
private:
	std::unordered_map<std::pair<int, int>, tile*> positionsToPieceMap;
public:
	board();
	tile* getTileAtPosition(std::pair<int, int> const& position);
	~board();
};

