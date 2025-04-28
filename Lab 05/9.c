#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
    int n,i,sign=-1,sum=0,term;

    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        term=power(i,2);
        if(i%2==0)
        {
            sum=sum+ sign*term;
        }
        else
        {
            sum=sum+term;
        }
    }

    printf("Sum=%d",sum);
    getch();
    return 0;

}
int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,n-1);
    }

}
