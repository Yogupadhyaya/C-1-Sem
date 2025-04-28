#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,n;
    do{
    printf("Enter n");
    scanf("%d",&n);
    sum+=n;


    }while(n!=0);

    printf("Sum=%d",sum);
return 0;
getch();
}
