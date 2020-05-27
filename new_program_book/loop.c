#include<stdio.h>
int main()
{
    int m,n;
    int a,b;
    int Maxdivide(int,int);
    int Minmultiple(int,int);
    scanf("%d %d",m,n);
    a = Maxdivide(m,n);
    /*b = Minmultiple(m,n);*/
    printf("最大公约数：%d\n",a);
    return 0;
}

int Maxdivide(int a,int b)
{
    int result;
    int left,right,trans;
    left = a;
    right = b;
    if (left%right!=0)
    {
        trans = left;
        left = right;
        right = trans % right;

    }
    result = left/right;

    return result; 
}
