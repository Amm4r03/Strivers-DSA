// problem link : https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<stdio.h>

int main(){
    char c;
    c = getchar();

    if (c >= 'A' && c <= 'Z')
    {
        printf("1");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("0");
    }
    else
    printf("-1");

    return 0;
}
