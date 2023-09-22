#include<iostream>
using namespace std;
int main(){
	float x,y;
	cout<<"Enter the x-y coordinates of the point\n";
	cin>>x>>y;
	if (x==0&&y==0){
		cout<<"The point is on the origin.";
	}
	if(x==0 && y!=0){
		cout<<"The point is lies on the y-axis.";
	}
	if(x!=0 && y==0){
		cout<<"The point is lies on the x-axis";
	}
	if(x!=0&&y!=0){
		cout<<"The point is lies on the plane.";
	}
	return 0;
}
