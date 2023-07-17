#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The first %d even natural numbers in reverse order:\n",n);
	while(n>=i){
		printf("%d\n",2*n);
		n--;
	}
	return 0;
}
