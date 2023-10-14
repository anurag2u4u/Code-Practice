#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<endl;
		for(int x=1;x<=10;x++){
			cout<<i*x<<"  ";
		}
		
	}
	return 0;
}
