#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp = fopen("phonebook.csv","a");
    char name[100];
    char number[100];
    int i;
    printf("name:");
    scanf("%s",name);
    printf("number:");
    scanf("%s",number);
    fprintf(fp,"%s,%s\n",name,number);
    fclose(fp);
    return 0;
}