#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,i;
    int *p;
    float resulta=0,resultb=0;
    int sum_a=0,sum_b=0,size_a=0,size_b=0;
    float average_a,average_b;
    do scanf("%d%d",&n,&k);
    while (n<=10000&&k<=100==0);
    p = malloc(n*sizeof(int));
    for ( i = n; i >=0; i--)
    {
        p[i] = i+1;
    }
    for ( i = 0 ; i < n; i++)
    {
        if ((*(p+i))%k==0)
        {
            sum_a += *(p+i);
            size_a+=1;
            }
        if(p[i]%k!=0)
        {
            sum_b += *(p+i);
            size_b += 1;
            }
    }
    average_a = sum_a / size_a;
    average_b = sum_b / size_b;

    resulta = (average_a*100+5)/100;
    resultb = (average_b*100+5)/100;

    printf("%.1f %.1f\n",resulta,resultb);
    return 0;
}