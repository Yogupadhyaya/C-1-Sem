#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("(%d^2+%d^2)/%d\t",i,i+1,i+1);
    }
return 0;
getch();
}
