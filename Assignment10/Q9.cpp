#include<stdio.h>
int checkdigit(int n,int digit){
	while(n!=0){
		if(n%digit==0){
			return 1;
		}
		n=n/10;
	}
	return 0;
	
}
int main(){
	int num,digit;
	printf("Enter any Number:\n");
	scanf("%d",&num);
	printf("Enter a digit to check:\n");
	scanf("%d",&digit);
	if(checkdigit(num,digit)){
		printf("Yes\n\n");
	}
	else{
		printf("NO\n\n");
	}
	return 0;
}
