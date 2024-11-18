//h
#include <vector>
#include <string>

using std::vector;
using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

public:
    TicTacToe(int size) : pegs(size * size, " ") {}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;} 
    void display_board() const;
    string get_winner(){return winner;};

protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    void set_winner(){winner = player=="X" ? "O" : "X";};
    void set_next_player(){player = player=="X" ? "O" : "X";};
    bool check_board_full();
    void clear_board();
    string player;
    string winner;
};


#endif