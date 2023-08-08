#include<stdio.h>
int num;
void primefact(int num){
	int i;
	printf("Enter any Number:\n");
	scanf("%d",&num);
	printf("Prime Factor of %d:",&num);
	for(i=2;i<=num;i++){
		while(num%i==0){
			printf("%d",i);
			num=num/i;
		}
	}
	
}
int main(){
	primefact(num);
	return 0;
}
