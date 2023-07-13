#include<stdio.h>
int main(){
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	if(x>=1){
		printf("Possitive Number");
		
	}
	else if(x==0){
		printf("Zero");
	}
	else{
		printf("Negative number");
	}
	return 0;
}
