// 2 - Counting Valleys (HackerRank Exercise)

/*
An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly n steps, 
for every step it was noted if it was an uphill or a downhill. Hikes always start and end at sea level, 
and each step up or down represents a  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level 
and ending with a step down to sea level.

A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level 
and ending with a step up to sea level.

Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.

Example: steps = 8, path = [DDUUUUDD]
*/

// Time Complexity: O(n) where n is the length of path
// Space Complexity: O(1)

#include <string>

int countingValleys(int steps, std::string path) 
{
    int valleysTraveled = 0;
    int height = 0;

    for (char c : path)
    {
        int oldHeight = height;
        
        if (c == 'D')
        {
            height -= 1;
        }
        else if (c == 'U')
        {
            height += 1;
        }
        
        // If we are at sea level and previously were below, we just exited a valley
        if (height == 0 && oldHeight == -1) ++valleysTraveled;
    }
    
    return valleysTraveled;
}