#include <iostream>
using namespace std;


int main(){
	int x;
	cout<<"enter the value of x "<<endl;
	cin>>x;
	for(int i=1;i<=x;i++){
		for(int i=1;i<x;i++){
			cout<<"*"<<" ";
		}
		cout<<"*"<<endl;
	}
	return 0;
}
