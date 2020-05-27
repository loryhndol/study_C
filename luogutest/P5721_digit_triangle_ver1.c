#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int p;
    srand((unsigned)time(0));
    for ( i = n; i >= 0; i--)
        {
            for( j = 0; j < n; j++)
            {
                p = rand();
                if(p>=0&&p<=9)
                printf("0%d",p);
                if(p>=10&&p<=99)
                printf("%d",p);
                if(p>=100&&p<=999)
                printf("%d",p/10);
                if(p>=1000&&p<=9999)
                printf("%d",p/100);
                if(p>=10000&&p<=RAND_MAX)
                printf("%d",p/1000);
                }
                
            printf("\n");
            n--;
            }
    return 0;
}

