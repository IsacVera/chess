#ifndef CHESSBOARD_H
#define CHESSBOARD_H

class ChessBoard {
    public:
        ChessBoard();
        void resetBoard();
        void displayBoard() const;

    private:
        int board[8][5];
};

#endif // !CHESSBOARD_H
