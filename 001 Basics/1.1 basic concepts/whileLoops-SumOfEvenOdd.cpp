// link : https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main() 
{
	int number;
	scanf("%d", &number);

	int evenSum = 0, oddSum = 0;

	while(number != 0)
	{
		int digit = number % 10;
		if(digit % 2 == 0)
		{
			evenSum = evenSum + digit;
		}
		else
		{
			oddSum = oddSum + digit;
		}
		number = number / 10;
	}

	printf("%d %d", evenSum, oddSum);

    return 0;
}