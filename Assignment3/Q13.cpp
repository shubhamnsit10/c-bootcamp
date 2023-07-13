#include<stdio.h>
int main(){
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	if((x%3==0)&&(x%2==0)){
		printf("Yes,The number is divisible by 2 And 3");
	}
	else{
		printf("NO,The number is not divisible by 2 and 3");
	}
	return 0;
}
