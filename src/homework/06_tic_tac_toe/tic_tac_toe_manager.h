#include <vector>
#include <string>
#include "tic_tac_toe.h"
#include <memory>

using std::vector, std::string, std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
    void save_game(unique_ptr<TicTacToe>& game);
    void get_winner_total(int& o, int& x, int& t);
    void display_games() const;

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
};

#endif