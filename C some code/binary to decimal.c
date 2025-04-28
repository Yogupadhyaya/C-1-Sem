//decimal to binary

#include<stdio.h>
int main()
{
    int d=0,b,base=1,r;
    printf("Enter binary Number");
    scanf("%d",&b);
    while(b>0)
    {
        r=b%10;
        d=d+r*base;
        base*=2;
        b=b/10;
    }
    printf("%d",d);
    return 0;
}

