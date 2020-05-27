#include<stdio.h>
#include<string.h>
int main()
{
    char list[2500][25];
    int table_11[2],table_21[2];
    int i=0,j=0;
    int round_11=0,round_21=0,newround_l,newround_w;
    int totalw_11=0,totall_11=0,totalw_21=0,totall_21=0;
    int cnt_11,cnt_21;
    int max(int,int);
    do
    {
        scanf("%c",&list[i][j]);
        if(j<25)j++;
        if(j=25){i++;j=0;}
    } while (list[i][j-1]!='E');
    for ( i = 0; i < 2500; i++)
    {
        for ( j = 0; j<25; j++)
        {
            if(list[i][j]=='W'){totalw_11++;totalw_21++;}
            if(list[i][j]=='L'){totall_11++,totall_21++;}
            if(list[i][j]=='E')break;
        }
        
    }
    round_11 = max(totall_11/11,totalw_11/11);
    round_21 = max(totall_21/21,totalw_21/21);
    newround_l = totall_11%11;
    newround_w = totalw_11%11;
    for ( i = 0; i < strlen(list); i++)
    {
        
    }
    

    return 0;
}

int max(int a,int b)
{
    int c;
    if(a>b)c=a;
    if(a<b)c=b;
    return c;
}