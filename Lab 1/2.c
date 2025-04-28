#include<stdio.h>
#include<conio.h>
 int main()
 {
    float x,y,v;
    printf("Enter the value of x and y");
    scanf("%f%f",&x,&y);
    v=x*x+y*y-100/x ;
    printf("\nThe answer is %.2f", v);
    getch();
    return 0;

 }
