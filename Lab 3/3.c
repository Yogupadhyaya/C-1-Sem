#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\t%d",i);
    }
    printf("\n");
     for(i=n;i>=1;i--)
    {
        printf("\t%d",i);
    }
    getch();
    return 0;
}
