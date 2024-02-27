// 1 - Functions (HackerRank C++ Series)

// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four 
// arguments it receives.

#include <iostream>
#include <algorithm>

int max_of_four(int a, int b, int c, int d)
{
    return std::max(std::max(a, b), std::max(c, d));
}

int main() 
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d; 
    std::cout << max_of_four(a, b, c, d);
    return 0;
}