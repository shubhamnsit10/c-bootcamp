#include<stdio.h>
int main(){
	int i=1,n=5;
	printf("A table of 5\n");
	while(i<=10){
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}
