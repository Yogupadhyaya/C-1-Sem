#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0,b=1,c=0,i;
    printf("Enter a number to display that term of fibonacci:");
    scanf("%d",&n);

    for(  i=1;i<=(n-2);i++)
    {
     c=a+b;
     a=b;
     b=c;
     }

     printf("%d",c);
     getch();
     return 0;
     }
