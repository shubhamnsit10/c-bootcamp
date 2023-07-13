#include<stdio.h>
int main(){
	int m;
	printf("Enter month number as m:\n");
	scanf("%d",&m);
	if(m==1||m==3||m==4||m==7||m==8||m==10||m==12){
		printf("The month %d has 31 days",m);
	}
	else if(m==2){
		printf("The month %d has 28/29 days",m);
	}
	else{
		printf("The month %d has 30 days",m);
	}
	return 0;
}
