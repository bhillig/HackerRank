// Classes And Objects (HackerRank C++ Exercise)

/**
Kristen is a contender for valedictorian of her high school. 
She wants to know how many students (if any) have scored higher than her in the exams given during this semester.

Create a class named Student with the following specifications:
	- An instance variable named  to hold a student's  exam scores.
	- A void input() function that reads  integers and saves them to .
	- An int calculateTotalScore() function that returns the sum of the student's scores.

The first line contains n, the number of students in Kristen's class. 
The subsequent lines contain each student's exam grades for this semester.

Kristen's grades are on the first line of grades.
*/

#include <iostream>

class Student
{
public:
	int scores[5];  
  
	void input()
	{
		for (int i = 0; i < 5; ++i)
		{
			std::cin >> scores[i];
		}
	}
  
	int calculateTotalScore()
	{
		int sum = 0;
		for (int i = 0; i < 5; ++i)
		{
			sum += scores[i];
		}
		return sum;
	}
};

int main() 
{
	int higherScorers = 0;
    
	int n = 0;
	std::cin >> n;
    
	Student students[n];
	for (int i = 0; i < n; ++i)
	{
		students[i].input();
	} 
    
	int kristenScore = students[0].calculateTotalScore();
    
	for (int i = 1; i < n; ++i)
	{
		if (students[i].calculateTotalScore() > kristenScore)
		{
			higherScorers++;
		}
	}
    
	std::cout << higherScorers;
	return 0;
}