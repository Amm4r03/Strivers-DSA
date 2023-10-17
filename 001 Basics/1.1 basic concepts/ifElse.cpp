// link : https://www.codingninjas.com/studio/problems/if-else-decision-making_8357235?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include <iostream>

std::string compareIfElse(int a, int b) 
{
	if(a > b)
	{
		return "greater";
	}
	else if (b > a)
	{
		return "smaller";
	}
	else
	{
		return "equal";
	}
}
