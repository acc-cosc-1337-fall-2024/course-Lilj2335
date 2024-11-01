#include "tic_tac_toe.h"
#include <iostream>

using std::cin, std::cout; 

int main() 
{
	TicTacToe game;

	string first_player = "";
	do{
	cout<<"Please input first player: ";
	cin>>first_player;
	}while(first_player!="X"&&first_player!="O");

	string exitgame;
	do
	{
		game.start_game(first_player);
		while (!game.game_over())
		{
			int pos;
			do{
			cout<<"input position: ";
			cin>>pos;
			}while(pos<1||pos>9);

			game.mark_board(pos);
			game.display_board();
		}

		cout<<game.get_winner()<<" has won the game!\n"; 

		cout<<"Leave?? (y/n): ";
		cin>>exitgame;	

	} while (exitgame!="y");
	
	return 0;
}