#include<stdio.h>
int main(){
	int x,y,i,h,flag=0;
	printf("Enter any two number:\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=x*y;i++){
		if((i%x==0)&&(i%y==0)){
			h=(x*y)/i;
			break;
			
		}
	}
	if(h==1){
		printf("%d and %d are CO PRIME NUMBER",x,y);
	}
	else{
		printf("%d and %d are not CO PRIME",x,y);
	}
	return 0;
}
