#include<stdio.h>
int main()
{
    int n,i,j,k,cnt;
    int cutearray[100];
    int cmparray[100];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
        scanf("%d",&cutearray[i]);
    for ( j = 1; j < n; j++)
    {
        cnt = 0;    
        for ( k = 0; k < j; k++)
        {
            if(cutearray[k]<cutearray[j])cnt++;
            else continue;
        }
        cmparray[j]=cnt;
    }
    cmparray[0] = 0;
    for ( i = 0; i < n; i++)
        printf("%d ",cmparray[i]);
    printf("\n");
    return 0;
}