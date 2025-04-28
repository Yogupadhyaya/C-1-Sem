#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,i,j;
    printf("Enter the value of M and N");
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {



        printf("\t%d X %d = %d", j,i, i*j);
        }

        printf("\n");
    }
    getch();
    return 0;
}
