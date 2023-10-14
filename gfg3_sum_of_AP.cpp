#include <iostream>
using namespace std;

int sum(int a){
	return  ((a*a)+a)/2;
}
int main(){
	int n ;
	cout<<"enter the value of 'n'--> "<<endl;
	cin>>n;
	cout<<"the sum of first "<<n<<"is"<<sum(n)<<endl;
	return 0;
	
}
