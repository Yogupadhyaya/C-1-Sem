#include<stdio.h>
#include<conio.h>

int main()
{
    float C,F;
    
    printf("Enter the Temperature in degree Celsius");
    scanf("%f",&C);
    F=1.8*C+32;
    
    
    printf("\nThe the Temperature in Farenheit is %.2f",F);

    getch();
    return 0;


}

