#include<stdio.h>
int main(){
	int num,i,fact=1;
	printf("Enter any number:\n");
	scanf("%d",&num);
	if(num<=0){
		printf("Factorial of Negative number Does not exist");
	}
	else{
		for(i=num;i>=1;i--){
			fact=fact*i;
		}
		printf("The factorial of %d is %d",num,fact);
	}
	return 0;
}
