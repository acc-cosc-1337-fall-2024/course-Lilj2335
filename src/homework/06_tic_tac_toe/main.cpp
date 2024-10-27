
#include "tic_tac_toe.h"
#include <iostream>

using std::cin, std::cout; 

int main() 
{
	TicTacToe game;

	string first_player = "";
	cout<<"enter first player: ";
	cin>>first_player;

	string exitgame;
	do
	{
		game.start_game(first_player);
		while (!game.game_over())
		{
			int pos;
			cout<<"enter position: ";
			cin>>pos;
			game.mark_board(pos);
			game.display_board();
		}

		cout<<"exit? (y/n): ";
		cin>>exitgame;	

	} while (exitgame!="y");
	
	return 0;
}
