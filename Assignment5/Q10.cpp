#include<stdio.h>
int main(){
	int  i=1,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf("A table of %d:\n",n);
	while(i<=10){
		
		printf("%d X %d =%d\n",n,i,n*i);
		i++;
	}
	return 0;
}
