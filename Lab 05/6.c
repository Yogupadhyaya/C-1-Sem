#include<stdio.h>
#include<conio.h>
void countsDigits(int *,int *);
int num;
int main()
{
    int n,ce=0,co=0;
    printf("Enter a number");
    scanf("%d",&n);
    countsDigits(&n,&ce);
    co=num-ce;
    printf("Even Digits =%d",ce);
    printf("\nOdd Digits =%d",co);

}
void countsDigits(int *n, int *ce)
{
    int r;
    num=0;
    while(*n>0)
    {
        r=*n%10;
        if(r%2==0)
        {
            (*ce)++;
        }
        num++;
        *n=*n/10;
    }
}
