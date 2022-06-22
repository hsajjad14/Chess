#include "board.h"

board::board()
{
	// generate board
	// 8x8 matrix of positions
	colours colour = black;
	for (int i = 0; i < BOARD_DIMENSION; i++) {
		if (i % 2 == 0) {
			colour = black;
		}
		else {
			colour = white;
		}
		for (int j = 0; j < BOARD_DIMENSION; j++) {

			positionsToTileMap[std::make_pair(i, j)] = new tile();
			positionsToTileMap[std::make_pair(i, j)]->colour = colour;

			if (colour == black) {
				colour = white;
			}
			else if (colour == white) {
				colour = black;
			}
		
		}
	}
}

tile* board::getTileAtPosition(std::pair<int, int> const& position)
{
	// if non-existing position
	if (positionsToTileMap.find(position) == positionsToTileMap.end()) {
		return nullptr;
	}

	return positionsToTileMap[position];
	
}

