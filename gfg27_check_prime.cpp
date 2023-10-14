#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"enter the value of x "<<endl;
	cin>>x;
	
	for(int i=2;i<x;i++){
		 if(x%i==0){
			cout<<"NO";
			break;
		}
		else if(i==x-1){
			cout<<"YES";
			break;
		}
	}
	
	return 0;
}
