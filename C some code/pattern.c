#include<stdio.h>
int main()
{
    char str[]="HELLO";
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            putchar(str[j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<(4-i);j++)
        {
            putchar(str[j]);
        }
        printf("\n");
    }
}
