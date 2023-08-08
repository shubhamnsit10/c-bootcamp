#include<stdio.h>
int check_EvenorOdd(int n){
	return (n%2==0);
}
int main(){
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	if(check_EvenorOdd(num)==1){
		printf("The Number is Even");
		
	}
	else{
		printf("The Number is Odd");
	}
	return 0;
}
