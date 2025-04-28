#include<stdio.h>
#include<math.h>
 int main()
 {
   
   int a,b,c,s,Area;
   printf("Enter three sides of triangle");
   scanf("%d%d%d",&a,&b,&c);
   if((a+b)>c && (b+c)>a && (a+c)>b)
   {
   	printf("\nYour Triangle is possible");
   	s=(a+b+c)/2;
   	Area= sqrt(s*(s-a)*(s-b)*(s-c));
   	printf("\n Area = %d",Area);
   }
   else
   {
   		printf("\n Triangle not Possible");
   }
   
    getch();
    return 0;
 }
 

