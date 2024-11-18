#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>
#include "menu_tools.h"

using std::cin, std::cout;
using std::string;
using std::unique_ptr;
using std::make_unique;

int main() 
{
    TicTacToeManager manager;
    string exit_game;

    do {
        int game_type = get_int_input("Enter 3 for TicTacToe 3x3 or 4 for TicTacToe 4x4: ", 3, 4);

        unique_ptr<TicTacToe> game;
        if (game_type == 3) {
            game = make_unique<TicTacToe3>();
        } else if (game_type == 4) {
            game = make_unique<TicTacToe4>();
        }

        string first_player;
        do {
            cout << "Enter first player (X/O): ";
            cin >> first_player;
        } while (first_player != "X" && first_player != "O");

        game->start_game(first_player);

        while (!game->game_over()) {
            int pos;
            if (game_type == 3) {
                pos = get_int_input("Enter position (1-9): ", 1, 9);
            } else if (game_type == 4) {
                pos = get_int_input("Enter position (1-16): ", 1, 16);
            }

            game->mark_board(pos);
            game->display_board();
        }

        cout << game->get_winner() << " won!!!\n";

        manager.save_game(game);

        int x_wins, o_wins, ties;
        manager.get_winner_total(x_wins, o_wins, ties);
        cout << "Current Scores: X wins: " << x_wins << ", O wins: " << o_wins << ", Ties: " << ties << "\n";

        cout << "Exit? (y/n): ";
        cin >> exit_game;

    } while (exit_game != "y");

    return 0;
}