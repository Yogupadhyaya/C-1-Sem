#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,m;
    printf("Enter a number.");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("\n %d X %d = %d",n,i,m);
    }
    getch();
    return 0;
}
