#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter any Number:\n");
	scanf("%d",&n);
	printf("The first %d even natural numbers:\n",n);
	while(i<=n){
		printf("%d\n",2*i);
		i++;
	}
	return 0;
}
