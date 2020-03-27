#include "Board.h"
#include <iostream>
#include <vector>
#include <algorithm>

//winning combos
const int Board::WINNING_COMBOS[NUM_WINNING_COMBOS][NUM_IN_COMBO] =
{
	{0,1,2},
	{3,4,5},
	{6,7,8},
	{0,3,6},
	{1,4,7},
	{2,5,8},
	{0,4,8},
	{2,4,6}
};

Board::Board() {
	reset();
}

void Board::reset() {
	board = std::vector<char>(0, ' ');
}

bool Board::isFull() const {
	//for(char c : board){
	//if (c == ' ')
	//return false;
	//}
	return std::none_of(board.begin(), board.end(), [](unsigned char c) {return c == ' '; });

}

bool Board::isValidMove(int move) const {

	if (move >= 0 && move < NUM_SQUARES) {
		return board[move] == ' ';
	}
	else {
		return false;
	}
}

bool Board::checkCombo(int combo, char piece) const {

	int piecesInCombo = 0;
	for (int i = 0; i < NUM_IN_COMBO; ++i) {
		if (board[WINNING_COMBOS[combo][i]] == piece) {
			++piecesInCombo;
		}
	}
	if (piecesInCombo == NUM_IN_COMBO)
		return true;
	else
		return false;
}
bool Board::isWinner(char piece) const {
	//check all winning combos
	bool winner = false;
	int combo = 0;

	while (!winner && combo < NUM_WINNING_COMBOS) {
		winner = checkCombo(combo, piece);
		++combo; //try next combo
	}
	return winner;
}


std::string Board::getBoardPlaces()const {

}

std::string Board::getCurrentBoard() const {

	//std::stringstream ss;
	//ss <<"\n\t"
}

void Board::makeMove(char playerPiece, int move) {
	board[move] = playerPiece;
}