#include<stdio.h>
#include<math.h>
 int main()
 {
   
   float a,b,c,d,x,y;
   printf("Enter the coefficients of quadratic equation");
   scanf("%f%f%f",&a,&b,&c);
   d=pow(b,2)-4*a*c;
   if(d>0)
   {
   	printf("\n Roots are real");
   	x=(-b+sqrt(d))/(2*a);
 	x=(-b-sqrt(d))/(2*a);
 	printf("Roots of quadratic equation are %f  and %f ",x,y);
  }
   else if(d==0)
   {
   		printf("\nRoots are equal");
   		x=-b/(2*a);
   		y=-b/(2*a);
   		  	printf("Roots of quadratic equation are %f  and %f ",x,y);
   }
   else
   {
   	printf("\n Roots are Imaginary");
   	x=(-b/(2*a));
   	y=abs(sqrt(-d)/(2*a));
   	printf("Roots of quadratic equation are %f + i%f and %f - i%f",x,y,x,y);
   }
   
    getch();
    return 0;
 }
