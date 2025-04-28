//decimal to binary

#include<stdio.h>
int main()
{
    int d,b=0,base=1,r;
    printf("Enter Decimal Number");
    scanf("%d",&d);
    while(d>0)
    {
        r = d%2;
        b=b+r*base;
        base*=10;
        d=d/2;
    }
    printf("%d",b);
    return 0;
}

