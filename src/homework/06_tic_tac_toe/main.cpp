#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin;  using std::cout; using std::string;

int main() 
{
	TicTacToeManager manager;
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

		while(game.game_over() == false)
		{
			cin>>game;
			cout<<game;
		}

		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(o, x, t);
		cout<<" O wins: "<<o;
		cout<<" X wins: "<<x;
		cout<<" Ties  : "<<t<<"\n";

		first_player = "Z";
		cout<<"Do you want to quit? enter N";
		cin>>choice;
	}
	while(choice == 'N');

	cout<<manager;

	return 0;
}