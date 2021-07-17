#include <iostream>

// Problem Description:
// Find the sum of all the multiples of 3 or 5 below 1000.

int main() {
    int acc = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            acc += i;
        }
    }
    std::cout << acc << std::endl;
}