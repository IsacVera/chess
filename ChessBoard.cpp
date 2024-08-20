#include "ChessBoard.h"
#include "iostream"
#include <string>

ChessBoard::ChessBoard() {
    std::string board[8][8];
}

void ChessBoard::setEmptyBoard() {
    int length = sizeof(board) /sizeof(board[0]);
    int width = sizeof(board[0]) /sizeof(board[0][0]);
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            board[j][i] = '0';
        }
    }

}

void ChessBoard::resetBoard() {
    std::string initialBoard[8][8] = {
        {"\u2656", "\u2658", "\u2657", "\u2655", "\u2654", "\u2657", "\u2658", "\u2656"}, 
        {"\u2659", "\u2659", "\u2659", "\u2659", "\u2659", "\u2659", "\u2659", "\u2659"},
        {" " , " ", " ", " ", " ", " ", " ", " "},
        {" " , " ", " ", " ", " ", " ", " ", " "},
        {" " , " ", " ", " ", " ", " ", " ", " "},
        {" " , " ", " ", " ", " ", " ", " ", " "},
        {"\u265F", "\u265F", "\u265F", "\u265F", "\u265F", "\u265F", "\u265F", "\u265F"},
        {"\u265C", "\u265E", "\u265D", "\u265B", "\u265A", "\u265D", "\u265E", "\u265C"}
    };

    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            board[i][j] = initialBoard[i][j];
        }
    }
}



void ChessBoard::displayBoard() const {
    std::string boardDisplay = "   | A | B | C | D | E | F | G | H \n";
    std::string rowNumber = "";

    for (int i=1; i<=8; i++) {
        boardDisplay += "___";
        for(int j=0; j<8; j++) {
            boardDisplay += "|___";
        }
        boardDisplay += "\n";

        rowNumber = std::to_string(i);
        boardDisplay += " " + rowNumber + " ";

        for(int j=0; j<=7; j++) {
            boardDisplay += "| " + board[i-1][j] + " ";
        }
        boardDisplay += "\n";
    }
    boardDisplay += "   ";
    for (int i=1; i<=8; i++) {
        boardDisplay += "|   ";
    }
    boardDisplay += "\n";

    std::cout << boardDisplay << std::endl;
}

