// 4 - For Loop (HackerRank C++ Exercise)

/**
	You will be given two positive integers, min and max, separated by a newline.
	For each number in this range:
		If the number is within 1 - 9 print the number (e.g 1 -> "one, 2 -> "two")
		Otherwise print if it's even or odd
*/

#include <iostream>
#include <unordered_map>

int main() 
{
    int min = 0;
    int max = 0;
    
    std::unordered_map<int, std::string> digitMap 
    {
      {1, "one"},
      {2, "two"},
      {3, "three"},
      {4, "four"},
      {5, "five"},
      {6, "six"},
      {7, "seven"},
      {8, "eight"},
      {9, "nine"}
    };
    
    
    std::cin >> min >> max;
    
    for (int num = min; num <= max; ++num)
    {
        if (digitMap.find(num) != digitMap.end())
        {
            std::cout << digitMap[num] << "\n";
            continue;
        }
        
        // Is even
        if (num % 2 == 0)
        {
            std::cout << "even\n";
        }
        else
        {
            std::cout << "odd\n";
        }
    }
    
    return 0;
}