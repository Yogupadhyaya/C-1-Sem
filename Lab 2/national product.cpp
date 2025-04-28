#include<stdio.h>
int main (){
float sp,np;
char f,n,nat;
printf("Enter the nationality of Product\n");
printf("Enter 'n'if the product is national and 'f'if Foreign\n");
printf("Nationality=");
scanf("%c",&nat);
	printf("SP=");
	scanf("%f",&sp);
	if(nat=='n'){
		np=0.06*sp+sp;
	}
	else{
		np=0.13*sp+sp;
	}
	printf("NP=%.2f",np);
	return 0;
	
}
