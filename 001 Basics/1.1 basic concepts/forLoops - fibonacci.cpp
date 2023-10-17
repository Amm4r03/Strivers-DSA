// link : https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int number;
        scanf("%d", &number);

        int first = 0, second = 1;
        int next = 1;

        for(int i = 2; i <= number; i++)
        {
                next = first + second;
                first = second;
                second = next;
        }
        printf("%d", next);
}