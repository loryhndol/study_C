#include<stdio.h>//此题解未考虑数列中有0的情况
int main()
{
    long num[100];
    int i=0;
    int cnt;
    do
    {
        scanf("%ld",&num[i]);
        i++;
    }
    while (num[i-1]!=0);
    cnt = i;
    for ( i=cnt-2; i >=0; i--)
        printf("%ld ",num[i]);
    printf("\n");
    return 0;
}



