#include<stdio.h>
#include<math.h>
 int main()
 {
   
   float a,b;
   int op;
   printf("Enter the value of a and b");
   scanf("%d%d",&a,&b);
   printf("\nWhich Operation do you want?");
   printf("1 for  \n 2 for Subtraction \n 3 for multiplication \n 4 for division");
   scanf("%d",&op);
  	switch(op)
  	{
  		case 1:
  			{
  			
  			printf("\n Sum = %f",a+b);
  			break;
  		}
  		case 2:
  			{
  			
  			printf("\n Subtraction = %f",a-b);
  			break;
  		}
  		case 3:
  		{
  		
  			printf("\n Muliplication = %f",a*b);
  			break;
  		}
  		case 4:
  			{
  			
  			printf("\n Divisiion = %f",a/b);
  			break;
  		}
  		default:
  			{
  			
  		    printf("\nInvalid");
  		}
  	}
   
    getch();
    return 0;
 }
