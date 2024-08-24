#include <iostream>
#include "ChessBoard.h"

int main() {
    std::string userInput;

    ChessBoard chessBoard;
    chessBoard.resetBoard();

    chessBoard.displayBoard();
    
    std::cout << "Enter your postion: 'A8'" << std::endl;
    std::cin >> userInput; 

    chessBoard.movePiece(userInput);
    return 0;
}
