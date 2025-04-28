#include<stdio.h>
int main()
{
    char str[]="NEPAL";
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(k=0;k<(4-i);k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i%2 != 0)
            {
                putchar(str[i]+32);
            }
            else{
            putchar(str[i]);
            }
        }
        for(l=0;l<i;l++)
        {
            if(i%2 != 0)
            {
                putchar(str[i]+32);
            }
            else{
            putchar(str[i]);
            }
        }
        printf("\n");
    }
}
