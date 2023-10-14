#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int num ,dig;
	cout<<"enter the integer"<<endl;
	cin>>num;
	
	cout<<abs(num)%10;   /*we can also use modulus function instead of if else statement
	
	                                          i.e.dig=abs(num)%10*/
//	if(dig<0){
//		cout<<"the last digit is "<<-1*dig<<endl;
//	}
//	else{
//		cout<<"the last digit is "<<dig<<endl;
//	}
	return 0;
}
