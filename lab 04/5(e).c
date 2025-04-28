#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j=1,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d/%d\t",j,(2*i-1));
    }
return 0;
getch();
}
