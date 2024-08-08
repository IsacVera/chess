#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <array>
class ChessBoard {
    public:
        ChessBoard();
        void setEmptyBoard();
        std::array<std::array<char, 8>, 8> resetBoard();
        void displayBoard() const;

    private:
        int board[8][8];
};

#endif // !CHESSBOARD_H
