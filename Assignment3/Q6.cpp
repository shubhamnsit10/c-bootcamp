#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter any number num1 and num2 respectively:\n");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("num1 is greater %d\n",num1);
	}
	else if(num1==num2){
		printf("Both are equal %d\n",num1);
	}
	else{
		printf("num2 is grater %d\n",num2);
	}
	return 0;
}
