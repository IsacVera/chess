#include <iostream>
#include "ChessBoard.h"

int main() {
    std::string currentPosition;
    std::string desiredPosition;

    ChessBoard chessBoard;
    chessBoard.resetBoard();

    chessBoard.displayBoard();
    
    std::cout << "Enter your postion: 'A8'" << std::endl;
    std::cin >> currentPosition; 
    std::cout << "Enter desired postion: 'A8'" << std::endl;
    std::cin >> desiredPosition; 

    chessBoard.movePiece(currentPosition, desiredPosition);

    chessBoard.displayBoard();

    return 0;
}
