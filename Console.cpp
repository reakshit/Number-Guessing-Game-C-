#include <iostream>
#include <cstdlib>
#include <ctime>
// random number guess game

int game() {
	int choice = 0;
	int guess = 0;
	int timet = 0;
	std::cout << "Welcome to the Random Number Guessing Game!" << std::endl;
	std::cout << "I will generate a random number between 0 and 100." << std::endl;
	std::cout << "You have to guess the number." << std::endl;
	std::cout << "Choose Difficulty Level: " << std::endl;
	std::cout << "1. Easy (10 attempts)" << std::endl;
	std::cout << "2. Medium (5 attempts)" << std::endl;
	std::cout << "3. Hard (1 attempts)" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	srand(time(0));
	if (choice < 1 || choice > 3) {
		std::cout << "Invalid choice. Please try again." << std::endl;
		game();
	}
	else if (choice == 1) {
		std::cout << "You have chosen Easy mode. You have 10 attempts." << std::endl;
		
		int rno = rand() % 101;
		for (int i = 0; i < 10; ++i)
		{
			std::cout << "Your Guess" << std::endl;
			std::cin >> guess;
			if (guess == rno) {
				std::cout << "Congratulations! You guessed the number in"<< i << std::endl;
				break;
			}
			else if (guess < rno) {
				std::cout << "Your guess is too low. Try again." << std::endl;
			}
			else {
				std::cout << "Your guess is too high. Try again." << std::endl;
			}
		}
	}
	else if (choice == 2) {
		std::cout << "You have chosen Medium mode. You have 5 attempts." << std::endl;
		
		int rno = rand() % 101;
		for (int i = 0; i < 5; ++i)
		{
			std::cout << "Your Guess" << std::endl;
			std::cin >> guess;
			if (guess == rno) {
				std::cout << "Congratulations! You guessed the number in" << i << std::endl;
				break;
			}
			else if (guess < rno) {
				std::cout << "Your guess is too low. Try again." << std::endl;
			}
			else {
				std::cout << "Your guess is too high. Try again." << std::endl;
			}
		}
	}
	else {
		std::cout << "You have chosen Hard mode. You have 1 attempt." << std::endl;
		
		int rno = rand() % 101;
		for (int i = 0; i < 1; ++i)
		{
			std::cout << "Your Guess" << std::endl;
			std::cin >> guess;
			if (guess == rno) {
				std::cout << "Congratulations! You guessed the number in " << i << " attempts." << std::endl;
				break;
			}
			else if (guess < rno) {
				std::cout << "Your guess is too low. Try again." << std::endl;
			}
			else {
				std::cout << "Your guess is too high. Try again." << std::endl;
			}
		}
	}
	return 0;
}

int main()
{
	game();
	return 0;
}
