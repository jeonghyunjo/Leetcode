#include <iostream>
#include <sstream>
#include <string>


int main() {
    int target;
    std::string userString;
    int guess = -1;

    srand(time(NULL));  //set the seed for the random number generator
    target = rand() % 100 + 1; //generate the 'random' number

    while (guess != target)
    {
        std::cout << "Guess a number between 0 and 100: ";
        std::getline(std::cin, userString);
        //convert to an int
        std::stringstream(userString) >> guess;
        std::cout << userString << "\n";
        if (guess > target)
            std::cout << "Your guess is too high\n";
        else if (guess < target)
            std::cout << "Your guess is too low\n";
        else
            std::cout << "You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if (userString == "q")
        {
            std::cout << "good bye!";
            std::cout << "The number was " << target << "\n";
            break;
        }
    }
    return 0;
}