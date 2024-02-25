// 5 - 2D Array (HackerRank Exercise)

/*

Given a 6x6 2D Array, arr:
An hourglass in A is a subset of values with indices falling in this pattern in arr's graphical representation:

	a b c
	  d
	e f g

There are 16 hourglasses in arr. An hourglass sum is is the sum of an hourglass' values.
Given an array, arr, return the maximum hourglass sum. The array will always be 6x6

*/

#include <vector>
#include <algorithm>

int hourglassSum(std::vector<std::vector<int>> arr) 
{
    if (arr.size() < 5) return 0;
    
    int maxSum = INT_MIN;
    
    for (int row = 1; row <= 4; ++row)
    {
        for (int col = 1; col <= 4; ++col)
        {
            int a = arr[row-1][col-1];
            int b = arr[row-1][col];
            int c = arr[row-1][col+1];
            int d = arr[row][col];
            int e = arr[row+1][col-1];
            int f = arr[row+1][col];
            int g = arr[row+1][col+1];
            
            int sum = a + b + c + d + e + f + g;
            maxSum = std::max(sum, maxSum);
        }
    }
    
    return maxSum;
}