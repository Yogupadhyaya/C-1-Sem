#include<stdio.h>
 int main()
 {
   
    float a=123.9876;
    printf("\n case 1 = %f",a);
    printf("\n case 2 = %e",a);
    printf("\n case 3 = %g",a);
    printf("\n case 4 = %15.4f",a);
    printf("\n case 5 = %-15.3f",-a);
    printf("\n case 6 = %015.4e",a);
    printf("\n case 7 = %.8f",a);
      printf("\n case 8 = %2.2f",a);
    getch();
    return 0;
 }
 

