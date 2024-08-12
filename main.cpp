#include <iostream>
#include "ChessBoard.h"

int main() {
    /*
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            std::cout << i;
            std::cout << j;
            std::cout << "|";
            std::cout << arr[i][j];
            std::cout << ' ';
        }
        std::cout << "" << std::endl;
    }
    */
    std::string c ="\u2654";
    std::cout<<c<<std::endl;

    ChessBoard chessBoard;
    chessBoard.resetBoard();

    chessBoard.displayBoard();

    return 0;
}
