#include<stdio.h>
int main(){
	char al;
	printf("Enter any alphabet:");
	scanf("%c",&al);
	if((al>=65)&&(al<=90)){
		printf("The Given Alphabet is Uppercase");
	}
	else{
		printf("The given alphabet is lowercase");
	}
	
	return 0;
   }
