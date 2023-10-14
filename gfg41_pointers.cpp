//#include<iostream>
//using namespace std;
//
//int main(){
//	int x=10;
//	cout<<&x<<endl;
//	cout<<*(&x)<<endl;
//	cout<<&(*(&x))<<endl;
//	return 0;
//}


/*  introduction to  pointers in C++      */

#include<iostream>
using namespace std;

int main(){
	int x=10;
	int*p;
	p=&x;
	cout<<x<<endl;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	
	
	return 0;
}
