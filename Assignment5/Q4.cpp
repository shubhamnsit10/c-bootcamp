#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf(" The first %d odd natural numbers:\n",n);
	while(i<=n){
		printf("%d\n",2*i-1);
		i++;
	}
	return 0;
	
}
