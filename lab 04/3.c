#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,primecount=0,palindromecount=0,c=0,i,j,num,reverse=0,r;
    printf("Enter the two number (n1<n2)");
   scanf("%d%d",&n1,&n2);
   
printf("Prime: ");
    for(i=n1+1;i<=(n2-1);i++)
    
	{
		c=0;
        for(j=2;j<=i-1;j++)
        {
            if((i%j)==0)
            {
                c++;
                
            }

        }
        if(c==0)
        {
            printf("\t%d",i);
            primecount++;
        }




    }
    printf("\n");
  printf("Palindrome: ");
    for(i=n1+1;i<=(n2-1);i++)
    {
        num=i;
        reverse=0;
      while(num>0)
        {
			r=(num%10);
            reverse=(reverse*10)+ r;
            num=num/10;
        }
        
        if(reverse==i)
        {
            printf("\t%d",i);
            palindromecount++;
        }
   }
   printf("\n\n Total prime = %d \n Total Palindrome = %d",primecount,palindromecount);



    getch();
    return 0;
}

