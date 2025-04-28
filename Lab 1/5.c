#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20];
    int age;
    printf("Enter the name of person");
    scanf("%s", name);
    printf("\nEnter the age of that person");
    scanf("%d", &age);

    printf("\nThe the name of person  is %s", name);

    printf("\nThe age of that person is %d", age);
    getch();
    return 0;


}
