#include<stdio.h>
int main(){
	int i=1;
	printf("The cubes of the first 10 natural numbers are:\n");
	while(i<=10){
		printf("%d\n",i*i*i);
		i++;
	}
	return 0;
}
