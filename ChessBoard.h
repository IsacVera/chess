#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <array>
class ChessBoard {
    public:
        ChessBoard();
        void setEmptyBoard();
        void  resetBoard();
        void displayBoard() const;

    private:
        char board[8][8];
};

#endif // !CHESSBOARD_H
