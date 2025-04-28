#include<stdio.h>
int main()
{
    int i,j,k,p;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=(6-i);j++)
        {
            printf("%d",j);
        }
        for(p=(j-2);p>=1;p--)
        {
            printf("%d",p);
        }
        printf("\n");
    }
}
