#include<stdio.h>
int main(){
	float sub1,sub2,sub3,sub4,sub5,total_marks,percentage;
	printf("Enter marks:\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total_marks=sub1+sub2+sub3+sub4+sub5;
	percentage=(total_marks/500)*100;
	if(percentage>=33){
		printf("The student is Passed");
	}
	else{
		printf("The student is failed");
	}
	return 0;
	
}
