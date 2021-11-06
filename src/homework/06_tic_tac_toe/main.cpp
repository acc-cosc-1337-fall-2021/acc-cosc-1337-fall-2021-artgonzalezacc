#include "tic_tac_toe.h"

using std::cin;  using std::cout; using std::string;

int main() 
{
	string first_player;
	char choice;
	TicTacToe game;

	do
	{
		while(!(first_player == "X" || first_player == "O"))
		{
			cout<<"Enter first player: ";
			cin>>first_player;
		}

		game.start_game(first_player);
		int position = 0;

		while(game.game_over() == false)
		{
			while(position < 1 || position > 9)
			{
				cout<<"Enter a position from 1-9: ";
				cin>>position;
			}

			game.mark_board(position);
			game.display_board();
			position = 0;
		}

		first_player = "Z";
		cout<<"Do you want to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N');

	return 0;
}