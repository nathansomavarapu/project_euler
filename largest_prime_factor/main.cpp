#include <iostream>
#include <unordered_set>
#include <math.h>

/*
Problem Description:
What is the largest prime factor of the number 600851475143
*/

bool is_prime(long value) {
    bool no_factors = true;
    for (long i = 2; i < sqrt(value); i++) {
        if (value % i == 0) {
            no_factors = false;
        }
    }
    return no_factors;
}

int main() {

    std::unordered_set<long> factors;
    long value = 600851475143;

    for (long i = 2; i < sqrt(value); i++) {
        if (value % i == 0) {
            factors.insert(i);
        }
    }

    auto it = factors.begin();
    long max = -1;
    while (it != factors.end()) {
        if (is_prime(*it) && max < *it) {
            max = *it;
        }
        it++;
    }
    std::cout << max << std::endl;
}