#include <iostream>


int main() {
	const int rows = 3;
	const int columns = 3;
	char grid[rows][columns];
	bool spaceFound = false;
	bool gameOver = false;
	char currentPlayer = ' ';
	int xinput = 0;
	int yinput = 0;


	for (int x = 0;x < rows; x++)
	{
		for (int y = 0; y < columns;y++)
		{
			grid[x][y] = ' ';
		}
	}

	for (int tick = 1;tick < 10;tick++) {

		if (tick % 2 == 0) {
			currentPlayer = 'X';
		}
		else {
			currentPlayer = 'O';
		}


		std::cout << "It is " << currentPlayer << "'s turn.\n";
		std::cout << "Please enter the row number of the square you would like to select(0-2): ";
		std::cin >> xinput;
		std::cout << "\nPlease enter the row number of the square you would like to select(0-2): ";
		std::cin >> yinput;

		grid[xinput][yinput] = currentPlayer;




		// check for horizontal win for current player
		for (int x = 0;x < rows; x++)
		{
			int matches = 0; // reset for each row
			for (int y = 0; y < columns;y++)
			{
				if (grid[x][y] == currentPlayer);
				{
					matches++;
					if (matches >= 3)
					{
						std::cout << "whatever";
						gameOver = true;
						break; // dont check the rest some1 won 
					}
				}
			}
			if (matches >= 3) {
				break;
			}
		}

		// check for verticle win for current player
		for (int y = 0;y < columns; y++)
		{
			int matches = 0; // reset for each row
			for (int x = 0; x < columns;x++)
			{
				if (grid[x][y] == currentPlayer);
				{
					matches++;
					if (matches >= 3)
					{
						std::cout << "whatever ";
						gameOver = true;
						break; // dont check the rest some1 won 
					}
				}
			}
			if (matches >= 3) {
				break;
			}
		}

		//check diagonal

		if ((grid[1][3] && grid[2][2] && grid[3][1] == currentPlayer) || (grid[1][1] && grid[2][2] && grid[3][3] == currentPlayer)) {
			gameOver = true;
			std::cout << "winner";
		}

		// if no win check for draw
		// if there is space available then there is still a chance a player can win 
		for (int x = 0;x < rows; x++)
		{
			for (int y = 0; y < columns;y++)
			{
				if (grid[x][y] = ' ')
				{
					spaceFound = true;
					break; // dont check da rest
				}
			}
			if (spaceFound) {
				break; // dont check the rest of the rows
			}
		}

		if (!spaceFound)
		{
			gameOver = true;
		}

	}




	return 0;
}