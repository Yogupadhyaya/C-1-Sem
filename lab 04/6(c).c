#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,sign=-1,n=1,num=0,den=1,term=0,sum=0;
    printf("Enter x and n");
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    {
        num=pow(x,2*i);
        den=den*(i+1);
        if((i+1)%2==0)
        {
            term= sign*(num/den);
        }
        else
        {
            term= num/den;
        }

    sum+=term;
    }
    printf("%d",term);
return 0;
getch();
}
