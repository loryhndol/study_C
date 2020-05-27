#include<stdio.h>
int main()
{
    int n,cnt=1,i,j,width;
    scanf("%d",&n);
    width = n;
    for ( i = 0; i < n; i++)
    {
        for(j = 0;j<width;j++)
        {
            if(cnt<10)printf("0%d",cnt);
            else printf("%d",cnt);
            cnt++;
        }
        width--;
        printf("\n");
    }

    return 0;
}