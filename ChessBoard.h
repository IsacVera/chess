#ifndef CHESSBOARD_H
#define CHESSBOARD_H

class ChessBoard {
    public:
        ChessBoard();
        void resetBoard();
        void displayBoard() const;

    private:
        int board[8][8];
};

#endif // !CHESSBOARD_H
