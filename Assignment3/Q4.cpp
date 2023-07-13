#include<stdio.h>
int main(){
	int x;
	printf("Enter any Number:");
	scanf("%d",&x);
	if(x&1){
		printf("The number is ODD");
	}
	else{
		printf("The number is Even");
	}
	return 0;
}
