#include <vector>
#include <string>
#include "tic_tac_toe.h"

using std::vector, std::string;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& x, int& t);

private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
};

#endif