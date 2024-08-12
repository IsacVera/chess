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
    int length = sizeof(board) /sizeof(board[0]);
    int width = sizeof(board[0]) /sizeof(board[0][0]);
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            std::cout << i;
            std::cout << j;
            std::cout << "|";
            std::cout << board[i][j];
            std::cout << ' ';
        }
        std::cout << "" << std::endl;
    }

    std::cout << std::endl;
}

