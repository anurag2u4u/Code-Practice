#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n "<<endl;
	cin>>n;
	int div(int a){
		n=n/a;
	}
	for(int i=2;i<=n;i++){
		if(n%i==0){
			cout<<i<<endl;
			 n=n/i;
		}
	}
	return 0;
}
