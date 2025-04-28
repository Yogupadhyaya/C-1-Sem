#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i,pro=1;
    printf("Enter a number.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pro*=i;
        sum+=i;
    }
    printf("\n Product = %d \t Sum=%d",pro,sum);

    getch();
    return 0;
}
