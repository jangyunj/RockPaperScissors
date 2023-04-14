#include <iostream>

char userChoice();
char computerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = userChoice();
}

char userChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game\n";

    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "************************\n";
        std::cout << "R for Rock\n";
        std::cout << "P for Paper\n";
        std::cout << "S for Scissors\n";
        std::cin >> player;

    } while (player != 'R' && player != 'P' && player != 'S');

    return player;

    std::cout << player;
    return 0;
}
char computerChoice()
{
    return 0;
}
void showChoice(char choice)
{
}
void chooseWinner(char player, char computer)
{
}