#include <iostream>
#include <vector>

/*
Problem Description:
By considering the terms in the Fibonacci sequence whose
values do not exceed four million, find the sum of the even-valued terms.
*/

int main() {
    std::vector<int> cache = {1,2};
    int acc = 2;
    int curr = 0;

    while (curr < 4000000) {
        int n = cache.size();
        curr = cache[n-1] + cache[n-2];
        if (curr > 4000000) break;

        cache.push_back(curr);
        if (curr % 2 == 0) {
            acc += curr;
        }
    }

    std::cout << acc << std::endl;
}