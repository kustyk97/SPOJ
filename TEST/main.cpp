#include <iostream>
#include <stdio.h>

int main() {
    while (true) {
        // Infinite loop
        int number;
        std::cin >> number;
        if (number == 42) {
            break;
        }
        std::cout << number << std::endl;
    }
    return 0;
}