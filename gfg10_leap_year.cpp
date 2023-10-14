//#include <iostream>
//using namespace std;
//int main(){
//	int year;
//	cin>>year;
//	
//	if(year>0){
//		if(year%400==0){
//			cout<<year<<" is a leap year"<<endl;
//		}
//		else if(year%100==0){
//			cout<<year<<" is not a leap year"<<endl;
//		}
//		else if(year%4==0){
//			cout<<year<<"is a leap year "<<endl;
//		}
//		else{
//			cout<<year<<" is not a leap year "<<endl;
//		}
//	}
//	else{
//		cout<<"invalid input"<<endl;
//	}
//	return 0;
//}


//***********GFG solution*****************//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cin>>year;
	if(year%4==0 and year%100 !=0){
		cout<<"leap year";
	}
	else if(year%400==0){
		cout<<"not a leap year";
	}
	else{
		cout<<"not a leap year";
	}
	return 0;
}













