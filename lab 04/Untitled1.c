#include <stdio.h>
int main(){
    int num, a, sum=0,b,R,q,sum1=0;
    printf("eNTER THE NUMBER: ");
    scanf("%d",&num);

    while(num%10!=0){
        a=num%10;
         num=num/10;
        sum+=a;


    }
    while(sum>9){
        b=sum%10;
        sum=sum/10;
        sum1+=b;


    }
    R= sum1+sum;
    if(R==10)
        R=1;
        printf("The sum is %d\n", R);

        goto g;
g:
        {if(R<=1){
            q=1;
            printf("The number is neither prime nor composite");
        }
        else if(R%2!=0||R%3!=0){


             printf("The number is prime");
             q=2;

        }
        else{
            q=3;
             printf("The number is composite");

        }

return 0;}
        //fibonaciii
        int i=3,j=0,k=0,l=1;
        while(q=1){
            if(R==1)
                printf("The first term is 0");

            }
            while(q=2&&q<R-1){
                k=j+1;
                j=l;
                l=k;
                i++;

            }
            printf("The nth term is %d", k);
            while(q=3&&q<R+1){
                k=j+1;
                j=l;
                l=k;
                i++;

            }
            printf("The nth term is %d", k);
       return 0;
        }












