#include <stdio.h>
int main(){
    int num, n, a, sum=0,b;
    printf("eNTER THE NUMBER: ");
    scanf("%d",&num);
    while(num%10!=0){
        a=n%10;
        sum+=a;
        n=n/10;
        b=sum;
    }
    printf("The sum is %d", b)

return 0;
}


