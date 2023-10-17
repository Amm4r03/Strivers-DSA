// link : https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int nthFibonacci(int number)
{
        if (number == 1)
        {
                return 1;
        }
        else if(number == 0)
        {
                return 0;
        }
        else
        {
                return nthFibonacci(number - 1) + nthFibonacci(number - 2);
        }
}

int main()
{
        int number;
        scanf("%d", &number);
        printf("%d", nthFibonacci(number));
}