#include "ChessBoard.h"
#include "iostream"

ChessBoard::ChessBoard() {
    char board[8][8];
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
    char initialBoard[8][8] = {
        {'R','N','B','Q','K','B','N','R'},
        {'P','P','P','P','P','P','P','P'},
        {'0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','K','Q','B','N','R'}
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
}

