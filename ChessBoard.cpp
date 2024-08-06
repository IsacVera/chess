#include "ChessBoard.h"
#include "iostream"

ChessBoard::ChessBoard() {}

void ChessBoard::resetBoard() {

}

void ChessBoard::displayBoard() const {
    int length = sizeof(board) /sizeof(board[0]);
    int width = sizeof(board[0]) /sizeof(board[0][0]);
    for(int i=0; i < length; i++) {
        for(int j=0; j < width; j++) {
            std::cout << board[i][j];
        }
        std::cout<< "" << std::endl;
    }
}

