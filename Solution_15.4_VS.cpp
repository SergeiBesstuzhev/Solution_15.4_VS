#include <iostream>

void FindOddEvenNumbers(int Limit, int Enter);

int main()
{
    const int LastNum = 99;
    int Command = 0;

    std::cout << "All even numbers: ";
    for (int i = 1; i <= LastNum; i++) {
        if ((i % 2) == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << "\n";
    std::cout << "All odd numbers: ";
    for (int i = 1; i <= LastNum; i++) {
        if ((i % 2) != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << "\n\nEnter Commant to output: 1 to odd numbers output, ";
    std::cout << "2 to even numbers output\n";
    std::cin >> Command;

    FindOddEvenNumbers(LastNum, Command);

}

void FindOddEvenNumbers(int Limit, int Enter) {

    if (Enter == 1) {
        std::cout << "All odd numbers: ";
        for (int i = Enter; i <= Limit; i += 2) {
            std::cout << i << " ";
        }
    }
    else if (Enter == 2) {
        std::cout << "All even numbers: ";
        for (int i = Enter; i <= Limit; i += 2) {
            std::cout << i << " ";
        }
    }
};