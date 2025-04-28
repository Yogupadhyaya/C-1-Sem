#include<stdio.h>
int main(){
	float sp,tp;
	int type;
	printf("Enter the SP\n");
	scanf("%f",&sp);
	printf("Enter 1 if product is grocery\n Enter 2 if product is cosmetics\n Enter 3 if product is clothing\n enter 4 if product is liquor\n ");
	printf("Enter the type of product purchased\n");
	scanf("%d",&type);
	switch (type){
		case 1:
			tp=0.1*sp+sp;
				break;
					case 2:
							tp=sp+sp*0.15;
							break;
							case 3:
								tp=sp+sp*0.2;
								break;
								case 4:
									tp=sp+sp*0.24;
									break;
									  default:
									  	printf("Your entered request is not available");
	}
if (tp>6000){
	tp=tp-0.02*tp;
}	
printf("Total Price=%f",tp);
return 0;
}
