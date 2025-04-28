#include<stdio.h>
int main()
{
char str1[30];
int i=0,j=0,flag=0;
printf("Enter first string: ");
scanf("%s",str1);
for(i=0;str1[i]!='\0';i++);
i--;
while(j<i)
{
    if(str1[i]!=str1[j])
    {
        flag=1;
        break;
    }
    j++;
    i--;
}
if(flag)
{
    printf("Not Palindrome");
}
else{
    printf(" Palindrome");
}
return 0;
}
