#include<stdio.h>
int main(){
	int i,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The first %d odd natural numbers in reverse order:\n");
	i=1;
	while(n>=i){
		printf("%d\n",2*n-1);
		n--;
	}
	return 0;
}
