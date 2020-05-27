#include<stdio.h>
#include<math.h>
int main()
{
    long a;
    long b;
    scanf("%ld",&a);
    b = log2(a);
    printf("%ld\n",b+1);
    return 0;
}