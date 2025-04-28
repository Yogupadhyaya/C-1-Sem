#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,f,c,x,y,p,q;
    
    printf("Enter the value of a,b,c,x,y,p,q");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&x,&y,&p,&q);
	f=pow((a+b),(2*x+y)/(p-q))+c-100;
    
    
    printf("\nThe value of f is %.2f",f);

    getch();
    return 0;


}

