#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter a number.");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nFactorial not possible!!");
    }
    for(i=1;i<=n;i++)
    {
        fact*=i;

    }
    printf("\nFactorial=%d",fact);

    getch();
    return 0;
}
