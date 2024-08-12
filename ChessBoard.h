#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <string>
class ChessBoard {
    public:
        ChessBoard();
        void setEmptyBoard();
        void  resetBoard();
        void displayBoard() const;

    private:
        std::string board[8][8];
};

#endif // !CHESSBOARD_H
