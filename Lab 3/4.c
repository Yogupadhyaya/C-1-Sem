#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number.");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum+=i;
    }
    printf("%d",sum);

    getch();
    return 0;
}
