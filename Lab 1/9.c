#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float x,y,s;
    
    printf("Enter the value of x and y");
    scanf("%f%f",&x,&y);
	s=pow(x,5)+0.2*x*y+pow(y,7);
    
    
    printf("\nThe value of S is %.2f",s);

    getch();
    return 0;


}

