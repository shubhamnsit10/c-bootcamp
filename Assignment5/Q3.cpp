#include<stdio.h>
int main(){
	int i,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf("The first %d natural numbers in reverse order:\n",n);
	i=1;
	while(n>=i){
		printf("%d\n",n);
		n--;
	}
	return 0;
}
