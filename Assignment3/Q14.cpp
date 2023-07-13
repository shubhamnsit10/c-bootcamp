#include<stdio.h>
int main(){
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	if((x%7==0)||(x%3==0)){
		printf("Yes,The number is divisible by 7 or 3");
	}
	else{
		printf("NO,The number is not divisible by 7 or 3");
	}
	return 0;
}
