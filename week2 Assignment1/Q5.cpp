#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	cout<<"Enter the side of tringle respectively:\n";
	cin>>s1>>s2>>s3;
	if((s1==s2)&&(s2==s3)){
		cout<<"The Triangle is Equilateral.";
	}
	if(s1==s2||s2==s3||s3==s1){
		cout<<"The Triangle is isosceles.";
	}
	else{
		cout<<"The Triangle is scales.";
	}
}
