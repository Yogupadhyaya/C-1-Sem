#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,temp;
    
    printf("Enter the two values a and b");
    scanf("%f%f",&a,&b);
    printf("\nThe value of a and b is %.2f and %.2f before Swapping",a,b);
    
	temp=a;
	a=b;
	b=temp;
    
    
    printf("\nThe value of a and b is %.2f and %.2f after Swapping",a,b);

    getch();
    return 0;


}

