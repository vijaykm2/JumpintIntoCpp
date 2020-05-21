//
// Created by vijay on 5/16/20.
//

#include "class.h"

enum CHESSPIECE{
    EMPTY_SQUARE, WHITE_PAWN
};
enum PLAYER_COLOR{
    PC_WHITE, PC_BLACK
};
class ChessBoard {
public:
    CHESSPIECE getPiece(int x, int y);
    PLAYER_COLOR getMove();
    int makeMove(int from_x, int from_y, int to_x, int to_y);

private:
    PLAYER_COLOR whoseMove;
    CHESSPIECE board[8][8];
};
CHESSPIECE ChessBoard::getPiece(int x, int y) {
    return board[x][y];
}
PLAYER_COLOR ChessBoard::getMove(){
    return whoseMove;
}

int ChessBoard::makeMove(int from_x, int from_y, int to_x, int to_y) {
    board[to_x][to_y] = board[from_x][from_y];
    board[from_x][from_y]= CHESSPIECE::EMPTY_SQUARE;
}