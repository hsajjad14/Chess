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

			positionsToPieceMap[std::make_pair(i, j)] = new tile();
			positionsToPieceMap[std::make_pair(i, j)]->colour = colour;

			if (colour == black) {
				colour = white;
			}
			else if (colour == white) {
				colour = black;
			}
		
		}
	}
}
