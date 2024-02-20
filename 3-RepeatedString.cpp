// 3 - Repeated String (HackerRank Exercise)

/* 

There is a string, , of lowercase English letters that is repeated 
infinitely many times. Given an integer, n, find and print the number of 
letter a's in the first  letters of the infinite string.

Example:
s = 'abcac
n = 10

Output: 4

*/

// Time Complexity: O(n) where n is the length of string s
// Space Complexity: O(1)

#include <string>

long repeatedString(std::string& s, long n) 
{
    long numberOfAs = 0;
    
    int frequency = 0;
    for (char c : s)
    {
        if (c == 'a') ++frequency;
    } 
    
    numberOfAs += (n / s.size()) * frequency;
    
    int remainder = n % s.size();
    if (remainder > 0)
    {
        for (int index = 0; index < remainder; ++index)
        {
            if (s[index] == 'a') ++numberOfAs;
        }
    }
    
    return numberOfAs;
}