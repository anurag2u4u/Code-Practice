#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,r,n;
	cout<<"enter the first term "<<endl;
	cin>>a;
	cout<<"enter the common difference"<<endl;
	cin>>r;
	cout<<"the value of nth term is "<<endl;
	cin>>n;
	cout<<"the nth term is "<<a*(pow(r,n-1))<<endl;
	
	
	return 0;
}
