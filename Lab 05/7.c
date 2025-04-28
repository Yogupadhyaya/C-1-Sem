#include<stdio.h>
#include<conio.h>
int findLowest(int,int,int);
int findHighest(int,int,int);
int main()
{
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("Highest = %d", findHighest(a,b,c));
    printf("\nLowest = %d", findLowest(a,b,c));
    getch();
    return 0;
}
int findHighest(int a,int b,int c)
{
    int x;
    x=(a>b)?(a>c)?a:c:(b>c)?b:c;
    return x;
}
int findLowest(int a,int b,int c)
{
    int x;
    x=(a<b)?(a<c)?a:c:(b<c)?b:c;
    return x;
}
