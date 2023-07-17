#include<stdio.h>
int main(){
	int i=10;
	printf("The first 10 odd natural numbers in reverse order\n");
	while(i>=1){
		printf("%d\n",2*i-1);
		i--;
	}
	return 0;
}
