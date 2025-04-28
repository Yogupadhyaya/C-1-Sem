#include<stdio.h>
#include<math.h>
 int main()
 {
   
   char ch;
   printf("Enter any character");
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z')
   {
   	printf("\nYour character is uppercase");
 
  }
   else if(ch>='a' && ch<='z')
   {
   		printf("\nYour character is lowercase");
   }
   else
   {
   	printf("\nYour Character is other than Alphabets");
   }
   
    getch();
    return 0;
 }
 

