#include<stdio.h>
#include<conio.h>

int main()
{
    float R1,R2,RS,RP;
    
    printf("Enter the Resistance of Resistor 1 and 2 respectively");
    scanf("%f%f",&R1,&R2);
    RS = R1+R2;
    RP= (R1*R2)/RS;
    
    printf("\nThe the resistance in series is %.2f and in parallel is %.2f",RS,RP);

    getch();
    return 0;


}

