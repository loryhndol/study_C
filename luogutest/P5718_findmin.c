#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int *p = malloc(n*sizeof(int));
    int i,j;
    for ( i = 0; i < n; i++)
        scanf("%d",p+i);
    
    for(i = 0; i < n-1; i++)
        for ( j = n-1; j > i; j--)
        {
            if(*(p+j) < *(p+j-1))
            {
                t = *(p+j);
                *(p+j) = *(p+j-1);
                *(p+j-1) = t;
                }

        }
    printf("%d\n",p[0]);
    free(p);


    return 0;
}