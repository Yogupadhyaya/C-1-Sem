#include<stdio.h>
int cmp(char[],char[]);
void cpy(char[],char[]);
int main()
{
    int i,d,j;
    char a[5][10],temp[10];
    for(i=0;i<5;i++)
    {
    printf("Enter Text");
    gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
     for(j=i+1;j<5;j++)
     {
         if((cmp(a[i],a[j]))>0)
         {
             cpy(temp,a[i]);
             cpy(a[i],a[j]);
             cpy(a[j],temp);
         }
     }
    }
    printf("Alphabetical ORder:");
    for(i=0;i<5;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
int cmp(char a[], char b[])
{
    int d=0,i=0;
    do
    {
        d=a[i]-b[i];
        if(d!=0)
        {
            return d;
        }
        i++;
    }while(a[i]!='\0' || b[i]!='\0');
    return d;
}
void cpy(char a[],char b[])
{
    int c;
    for(c=0;b[c]!='\0';c++)
    {
        a[c]=b[c];
    }
    a[c]='\0';
}
