//cpp
#include <iostream>
#include "tic_tac_toe.h"

using std::cin,std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win()||check_diagonal_win()||check_row_win()){
        set_winner();
        return true;
    }
    else if(check_board_full()){
        winner = "C";
        return true;
    }

    return false;
}

void TicTacToe::start_game(string first_player)
{
    player=first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (int i = 0; i < pegs.size()-1; i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

bool TicTacToe::check_board_full()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ") return false;
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

bool TicTacToe::check_column_win()
{
    if ((pegs[0] != " " && pegs[0]==pegs[3] && pegs[3]==pegs[6])||(pegs[1] != " " && pegs[1]==pegs[4] && pegs[4]==pegs[7])||(pegs[2] != " " && pegs[2]==pegs[5] && pegs[5]==pegs[8]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if ((pegs[0] != " " && pegs[0]==pegs[1] && pegs[1]==pegs[2])||(pegs[3] != " " && pegs[3]==pegs[4] && pegs[4]==pegs[5])||(pegs[6] != " " && pegs[6]==pegs[7] && pegs[7]==pegs[8]))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if ((pegs[0] != " " && pegs[0]==pegs[4] && pegs[4]==pegs[8])||
(pegs[2] != " " && pegs[2]==pegs[4] && pegs[4]==pegs[6]))
    {
        return true;
    }
    else
    {
        return false;
    }
}
