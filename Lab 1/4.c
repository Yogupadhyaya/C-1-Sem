#include<stdio.h>
#include<conio.h>

int main()
{
    float pen,copy,total,final;
    printf("Enter the price of two pens");
    scanf("%f",&pen);
    printf("\nEnter the proce of five copies");
    scanf("%f", &copy);
    total= pen +copy;
    printf("\nThe toal price  is %.2f", total);
    final=total-0.1*total;
    printf("\nThe final price is %.2f", final);
    getch();
    return 0;


}
