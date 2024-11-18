#include "tic_tac_toe_3.h"

using std::size_t;

bool TicTacToe3::check_column_win() {
    for (size_t col = 0; col < 3; ++col) {
        if (pegs[col] != " " &&
            pegs[col] == pegs[col + 3] &&
            pegs[col] == pegs[col + 6]) {
            return true;
        }
    }
    return false;
}


bool TicTacToe3::check_row_win() {
    for (size_t row = 0; row < 3; ++row) {
        size_t start = row * 3;
        if (pegs[start] != " " &&
            pegs[start] == pegs[start + 1] &&
            pegs[start] == pegs[start + 2]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_diagonal_win() {
    if (pegs[0] != " " &&
        pegs[0] == pegs[4] &&
        pegs[0] == pegs[8]) {
        return true;
    }
    if (pegs[2] != " " &&
        pegs[2] == pegs[4] &&
        pegs[2] == pegs[6]) {
        return true;
    }
    return false;
}