#include<stdio.h>
float simple_interest(float pa,float time,float rate){
	float si;   
    si = (pa*time*rate)/100; 
    return si;
}

int main(){
	float principle_amount,time,rate;
	float interest;
	printf("Enter Principle amount:\n");
	scanf("%f",&principle_amount);
	printf("Enter Time:\n");
	scanf("%f",&time);
	printf("Enter Rate:\n");
	scanf("%f",&rate);
	interest=simple_interest(principle_amount,time,rate);
	printf("Simple interest=%.2f\n",interest);
	return 0;
}
