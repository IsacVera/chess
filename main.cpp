#include <iostream>
#include "ChessBoard.h"

int main() {
    std::string userInput;

    ChessBoard chessBoard;
    chessBoard.resetBoard();

    chessBoard.displayBoard();
    
    std::cout << "Enter your postion: 'A8'" << std::endl;
    std::cin >> userInput; 

    std::cout << userInput;

    return 0;
}
