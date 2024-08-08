#include "ChessBoard.h"
#include "iostream"

ChessBoard::ChessBoard() {}

void ChessBoard::setEmptyBoard() {
    int length = sizeof(board) /sizeof(board[0]);
    int width = sizeof(board[0]) /sizeof(board[0][0]);
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            board[j][i] = '0';
        }
    }

}

std::array<std::array<char, 8>, 8> ChessBoard::resetBoard() {
    std::array<std::array<char, 8>, 8> arr = {{
        {'R','K','B','Q','K','B','K','R'},
        {'P','P','P','P','P','P','P','P'},
        {'0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0'},
        {'P','P','P','P','P','P','P','P'},
        {'R','K','B','K','Q','B','K','R'}
    }};
    return arr;
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

