#include<stdio.h>
void natural_number(int num){
	int i;
	for(i=1;i<=num;i++){
		printf(" %d\n",i);
	}
}
int main(){
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	printf("The first %d natural number is:\n",num);
	natural_number(num);
}
