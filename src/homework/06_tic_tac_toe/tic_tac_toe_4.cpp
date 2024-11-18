#include "tic_tac_toe_4.h"

using std::size_t;

bool TicTacToe4::check_column_win() {
    for (size_t col = 0; col < 4; ++col) {
        if (pegs[col] != " " &&
            pegs[col] == pegs[col + 4] &&
            pegs[col] == pegs[col + 8] &&
            pegs[col] == pegs[col + 12]) {
            return true;
        }
    }
    return false;
}

// Check for row win
bool TicTacToe4::check_row_win() {
    for (size_t row = 0; row < 4; ++row) {
        size_t start = row * 4;
        if (pegs[start] != " " &&
            pegs[start] == pegs[start + 1] &&
            pegs[start] == pegs[start + 2] &&
            pegs[start] == pegs[start + 3]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win() {

    if (pegs[0] != " " &&
        pegs[0] == pegs[5] &&
        pegs[0] == pegs[10] &&
        pegs[0] == pegs[15]) {
        return true;
    }

    if (pegs[3] != " " &&
        pegs[3] == pegs[6] &&
        pegs[3] == pegs[9] &&
        pegs[3] == pegs[12]) {
        return true;
    }
    return false;
}