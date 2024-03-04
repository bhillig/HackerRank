// 3 - Pointers (HackerRank C++ Exercise)

// Create a function that takes in two integer pointers (*a, *b)
// 
// By the end of the function:
// a' =  a + b
// b' = |a - b|

#include <cmath>
#include <iostream>

void increment(int* a, int* b)
{
    int oldA = *a;
    int oldB = *b;
    
    *a = oldA + oldB;
    *b = abs(oldA - oldB);    
}

int main() 
{
    
    int a;
    int b;
    std::cin >> a >> b;
    
    increment(&a, &b);
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    return 0;
}
