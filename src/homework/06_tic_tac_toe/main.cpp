#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cin, std::cout;

int main() 
{
    TicTacToeManager manager;
    TicTacToe game;

    std::string current_player;
    do {
        cout << "Choose the starting player (X or O): ";
        cin >> current_player;
    } while (current_player != "X" && current_player != "O");

    std::string continue_game;
    do {
        game.start_game(current_player);

        while (!game.game_over()) {
            int position;
            do {
				cout << "Select a position (1-9): ";
				cin >> position;
			} while (position < 1 || position > 9);

            game.mark_board(position);
            game.display_board();
        }

        cout << "Congratulations, " << game.get_winner() << " wins!\n";
        
        manager.save_game(game);

        int x_wins, o_wins, ties;
        manager.get_winner_total(x_wins, o_wins, ties);
        cout << "Scoreboard:\n X Wins: " << x_wins << ",\n O Wins: " << o_wins << ",\n Ties: " << ties << "\n";

        cout << "Would you like to exit? (y/n): ";
        cin >> continue_game;

    } while (continue_game != "y");

    return 0;
}
