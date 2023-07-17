#include<stdio.h>
int main(){
	int Num,count=0;
	printf("Enter any number:\n");
	scanf("%d",&Num);
	while(Num != 0){
		Num=Num/10;
		count++;
	}
	printf("The Number of digit in Given number is %d",count);
	return 0;
}
