#include<stdio.h>
#include<conio.h>
float power(int,int);
int fact(int);
int main()
{
    int n,den,i,sign=-1;
    float term,num,x,sum=0;
    printf("Enter the value of x and number of terms to go");
    scanf("%f%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        num= power(x,2*i-1);
        den= fact(2*i-1);
        if(i%2==0)
        {
            term= sign * num/den;
        }
        else
        {
            term= num/den;
        }
        sum+=term;
    }
    printf("Sin(%.2f) = %.2f",x,sum);
    getch();
    return 0;

}
float power(int x,int n)
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
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
