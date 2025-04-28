#include<stdio.h>
 int main()
 {
   
    char str[20]="I love Chitwan";
    printf("\n case 1 = %s",str);
    printf("\n case 2 = %18s",str);
    printf("\n case 3 = %-18s",str);
    printf("\n case 4 = %18.8s",str);
    printf("\n case 5 = %-18.9s",str);
    printf("\n case 6 = %5s",str);
    printf("\n case 7 = %.10s",str);
    
    getch();
    return 0;
 }
 

