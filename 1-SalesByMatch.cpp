// 1 - Sales By Match (HackerRank Exercise)

/*
There is a large pile of socks that must be paired by color. 
Given an array of integers representing the color of each sock, 
determine how many pairs of socks with matching colors there are.

Example: n=7 ar=[1,2,1,2,1,3,2] returns 2
*/

// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <map>

int sockMerchant(int n, std::vector<int>& ar) 
{
	int pairs = 0;
    
	std::unordered_map<int, int> frequencies;
	for (int num : ar)
	{
		if (frequencies.find(num) == frequencies.end())
		{
			frequencies.emplace(num, 1);
			continue;
		}
		frequencies[num] += 1;
	}
    
	for (const auto& [color, frequency] : frequencies)
	{
		pairs += (frequency / 2);
	}
    
	return pairs;
}