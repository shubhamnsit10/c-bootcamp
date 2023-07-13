#include<stdio.h>
int main(){
	char check;
	printf("Enter any char:\n");
	scanf("%c",&check);
	if((check>=65)&&(check<=90)){
		printf("The character is Uppercase");
	}
	else if((check>=97)&&(check<=122)){
		printf("The character is lowercase");
	}
	else if((check>=48)&&(check<=57)){
		printf("The character is digit");
	}
	else{
		printf("The chracter is Special chracter");
	}
	return 0;
}
