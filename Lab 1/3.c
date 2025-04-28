#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,c,d, mean;
    printf("enter four numbers");
    scanf("%f%f%f%f", &a,&b,&c,&d);
    mean=(a+b+c+d)/4;
    printf("\n The mean of number is %.2f", mean);
    getch();
    return 0;

}
