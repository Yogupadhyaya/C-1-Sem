#include<stdio.h>
int main(){
	float cu,rc;
 printf("Enter the Consumption unit");
 scanf("%f",&cu);
 if (cu<=50){
 rc=0.5*cu;
 }
 else if(cu<=100){
 rc=100+0.65*(cu-50);
 }
 else if (cu<=200){
 	rc=230+(cu-100)*0.8;
 }
else if(cu>200){
	rc=390+cu-200;
}	
	printf("RC=%f",rc);
	return 0;
}
