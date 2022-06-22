#include "game.h"

game::game()
{
	// for now have only two players
	// add more game options later
	players = 2;
}

void game::run()
{
}

void game::fillBoardWithPieces(board& board)
{
	// https://images.chesscomfiles.com/uploads/v1/images_users/tiny_mce/ColinStapczynski/phpa2wQPr.png

	// have white on the bottom, black on the top
	std::vector<Piece*> whitePieces;
	std::vector<Piece*> blackPieces;

	// 8 pawns on the second row and second last row
	for (int i = 0; i < BOARD_DIMENSION; i++) {
		Piece* whitePawn = new pawn(1, i, white);
		whitePieces.push_back(whitePawn);
		board.getTileAtPosition(std::make_pair(1, i))->pieceOnTile = whitePawn;
	}
	for (int i = 0; i < BOARD_DIMENSION; i++) {
		Piece* blackPawn = new pawn(6, i, white);
		blackPieces.push_back(blackPawn);
		board.getTileAtPosition(std::make_pair(6, i))->pieceOnTile = blackPawn;
	}

	for (int i = 0; i < BOARD_DIMENSION; i++) {
		Piece* whitePiece;
		Piece* blackPiece;
		switch (i)
		{
		case 0:
			// rook
			whitePiece = new rook(0, i, white);
			blackPiece = new rook(7, i, black);

			break;
		case 1:
			whitePiece = new knight(0, i, white);
			blackPiece = new knight(7, i, black);
			break;
		case 2:
			whitePiece = new bishop(0, i, white);
			blackPiece = new bishop(7, i, black);
			break;
		case 3:
			whitePiece = new queen(0, i, white);
			blackPiece = new queen(7, i, black);
			break;
		case 4:
			whitePiece = new king(0, i, white);
			blackPiece = new king(7, i, black);
			break;
		case 5:
			whitePiece = new bishop(0, i, white);
			blackPiece = new bishop(7, i, black);
			break;
		case 6:
			whitePiece = new knight(0, i, white);
			blackPiece = new knight(7, i, black);
			break;
		case 7:
			whitePiece = new rook(0, i, white);
			blackPiece = new rook(7, i, black);
			break;
		default:
			whitePiece = NULL;
			blackPiece = NULL;
			break;
		}

		board.getTileAtPosition(std::make_pair(0, i))->pieceOnTile = whitePiece;
		board.getTileAtPosition(std::make_pair(7, i))->pieceOnTile = blackPiece;

		whitePieces.push_back(whitePiece);
		blackPieces.push_back(blackPiece);
	}


	
}
