#include<Stdio.h>
int main(){
	int x;
	printf("Enter any Two Number: ");
	scanf("%d",&x);
	if(x>0){
		printf("Possitive Number");
	}
	else if(x<0){
		printf("Negative Number");
	}
	return 0;
}
