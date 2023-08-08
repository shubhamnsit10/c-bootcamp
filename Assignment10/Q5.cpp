#include<stdio.h>
void odd_num(int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%d\n",2*i-1);
	}
}
int main(){
	int num;
	printf("Enter any Number:\n");
	scanf("%d",&num);
	printf("The first %d Odd number are:\n",num);
    odd_num(num);
	return 0;
}
