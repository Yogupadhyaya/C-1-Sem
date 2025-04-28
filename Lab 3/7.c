#include<stdio.h>
#include<conio.h>
int main()
{
    float n,i,s=1,f=1;
    float x;
    printf("Enter the value of x and n");
    scanf("%f%f",&x,&n);

    for(i=1;i<=n;i++)
    {
        s*=x;
        f*=i;

    }

    printf(".2%f",s/f);

    getch();
    return 0;
}
