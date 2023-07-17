#include<stdio.h>
int main(){
	int N,i,flag=0;
	printf("Enter any Number:\n");
	scanf("%d",&N);
	if((N==0)||(N==1)){
		flag=1;
	}
	for(i=2;i<=N/2;i++){
		if(N%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is a prime number.",N);
	}
	else{
		printf("%d is not a prime number.",N);
	}
	return 0;
}
