#include<stdio.h>
int main(){
	float cp,sp,pt,loss,ptper,lossper;
	printf("Enter the cost price of the product:- ");
	scanf("%f",&cp);
	printf("Enter the selling price of the product:- ");
	scanf("%f",&sp);
	if(sp>=cp){
		pt=sp-cp;
		ptper=pt/cp*100;
		printf("The profit percentage is %.2f",ptper);	
	}
	else{
		loss=cp-sp;
		lossper=loss/cp*100;
		printf("The loss percentage is %.2f",lossper);	
		
	}
	return 0;
	
}
