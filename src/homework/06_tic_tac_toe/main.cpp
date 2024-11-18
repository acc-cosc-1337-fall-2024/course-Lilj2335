#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>
#include <limits>

using std::cin, std::cout;
using std::string;
using std::unique_ptr;
using std::make_unique;

int main() 
{
    TicTacToeManager manager;
    string exit_game;

    do {
        // Ask for game type with inline validation
        int game_type;
        while (true) {
            cout << "Enter 3 for TicTacToe 3x3 or 4 for TicTacToe 4x4: ";
            cin >> game_type;
            if (!cin.fail() && (game_type == 3 || game_type == 4)) {
                break;
            }
            cout << "Invalid input. Please enter 3 or 4.\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        unique_ptr<TicTacToe> game;
        if (game_type == 3) {
            game = make_unique<TicTacToe3>();
        } else if (game_type == 4) {
            game = make_unique<TicTacToe4>();
        }

        // Ask for first player with inline validation
        string first_player;
        while (true) {
            cout << "Enter first player (X/O): ";
            cin >> first_player;
            if (first_player == "X" || first_player == "O") {
                break;
            }
            cout << "Invalid input. Please enter 'X' or 'O'.\n";
        }

        game->start_game(first_player);

        // Main game loop
        while (!game->game_over()) {
            int pos;
            while (true) {
                if (game_type == 3) {
                    cout << "Enter position (1-9): ";
                } else if (game_type == 4) {
                    cout << "Enter position (1-16): ";
                }
                cin >> pos;

                if (!cin.fail() && pos >= 1 && ((game_type == 3 && pos <= 9) || (game_type == 4 && pos <= 16))) {
                    break;
                }
                cout << "Invalid input. Please enter a valid position.\n";
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            game->mark_board(pos);
            game->display_board();
        }

        // Display winner
        cout << game->get_winner() << " won!!!\n";

        manager.save_game(game);

        // Display current scores
        int x_wins, o_wins, ties;
        manager.get_winner_total(x_wins, o_wins, ties);
        cout << "Current Scores: X wins: " << x_wins << ", O wins: " << o_wins << ", Ties: " << ties << "\n";

        // Ask to exit or continue
        cout << "Exit? (y/n): ";
        cin >> exit_game;

    } while (exit_game != "y");

    return 0;
}
