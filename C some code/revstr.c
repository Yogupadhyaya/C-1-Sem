#include<stdio.h>
void rev(char[]);
int main()
{
    char str[10];
    printf("Enter the string");
    scanf("%s",str);
    rev(str);
    puts(str);
}
void rev(char a[])
{
    int l,i;
    char t;
    for(l=0;a[l]!='\0';l++);
    l--;
    for(i=0;i<l;i++,l--)
    {
        t=a[i];
        a[i]=a[l];
        a[l]=t;
    }

}
