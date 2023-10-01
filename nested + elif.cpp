#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	if(n>0){
		cout<<"This is a Positive integer and";
		if(n%2==0){
			cout<<"Even"<<endl;
		}
		else{
			cout<<"odd"<<endl;
		}
	}
	else if(n==0){
		cout<<"Zero is even integer";
	}
	else{
		cout<<"This is a Negative integer"<<endl;
		
	}
	return 0;
}

