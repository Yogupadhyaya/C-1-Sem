#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i,num,num1,a=0,t=0,count=0,r,check=0,sum=0,d;
    printf("Enter a number.");
    scanf("%d",&n);
    num1=n; num=n;
    for(i=2;i<=(n-1);i++)
    {
     if(n%i==0)
     {
        a++;
        t++;
        break;
     }
     if((n-2)%i==0)
    {
        t++;
    }
    if((n+2)%i==0)
    {

        d++;
    }
    }

    for(i=1;i<=n;i++)
    {
        sum= (pow(i,2)+i)/2;
        if(sum==n)
        {
         break;
        }
    }
    while(n>0)
    {
        n=n/10;
        count++;
    }
    while(num1>0)
    {
        r= num1%10;
        check=check+pow(r,count);
        num1=num1/10;
    }
    printf("\nNumber is :");
    if(a==0)
    {
        printf("\nPrime");
    }
     if(t==0)
    {
        printf("\n Twin Prime");
    }
     if(sum==num)
    {
        printf("\n Triangular");
    }
     if(check==num)
    {
        printf("\nArmstrong");
    }
    getch();
    return 0;
}
