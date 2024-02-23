// 4 - Jumping on the Clouds (HackerRank Exercise)

/*

There is a new mobile game that starts with consecutively numbered clouds. Some of the clouds are thunderheads 
and others are cumulus. The player can jump on any cumulus cloud having a number that is equal to the number 
of the current cloud plus 1 or 2. The player must avoid the thunderheads. Determine the minimum number of jumps 
it will take to jump from the starting postion to the last cloud. It is always possible to win the game.

For each game, you will get an array of clouds numbered 0 if they are safe or 1 if they must be avoided.

Ex:
c = [0, 0, 1, 0, 0, 1, 0]

Answer: 4 
*/

// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>

int jumpingOnClouds(const std::vector<int>& c) 
{
    std::vector<int> steps(c.size(), INT_MAX - 1);
    steps[c.size()-1] = 0;
    
    for (int i = c.size() - 2; i >= 0; --i)
    {
        int one = INT_MAX;
        int two = INT_MAX;
        
        if (i + 2 < c.size() && c[i + 2] == 0)
        {
            two = steps[i + 2];
        }
        if (i + 1 < c.size() && c[i + 1] == 0)
        {
            one = steps[i + 1];
        }
        
        steps[i] = std::min(one, two) + 1;
    }
    
    return steps[0];
}