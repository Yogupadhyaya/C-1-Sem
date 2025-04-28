#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Emter a num");
    scanf("%d",&n);
    printf("\n%d",sum(n));
    return 0;
}
int sum(int n)
{
   int r,s=0;
   repeat:
   while(n>0)
   {
       r=n%10;
       s=s+r;
       n=n/10;
   }
   if(s<=9)
   {
       return s;
   }
   n=s;
   s=0;
   goto repeat;
}
