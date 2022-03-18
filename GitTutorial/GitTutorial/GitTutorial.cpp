#include <string>
#include <iostream>

bool Guess(int number) {
	return false;
}

int main() {
	int guess;
	do {
		std::cout << "Choose a number between 0 - 100:";
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}