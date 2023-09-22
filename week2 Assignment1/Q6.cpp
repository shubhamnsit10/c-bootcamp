#include<iostream>
using namespace std;
int main(){
	int A,B,C;
	cout<<"Enter the marks respectively:\n";
	cin>>A>>B>>C;
	if(A<B&&A<C){
		cout<<"A has the least marks.";
	}
	else if(B<A&&B<C){
		cout<<"B has least marks.";
	}
	else{
		cout<<"C has least marks.";
	}
	return 0;
}
