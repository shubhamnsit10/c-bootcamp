#include<stdio.h>
int main(){
	int x,a;
	printf("Enter any Number:-");
	scanf("%d",&x);
	if(x>=100&&x<=999){
		printf("Yes,The Number is three digit");	
	}
	else{
		printf("NO,The Number is not three digit");
	}
	return 0;
}
