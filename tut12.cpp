#include <iostream>
using namespace std;
int main(){
	 // What is a POINTER? ----->
	 
//	 POINTER IS A DATATYPE( DERIVED ) WHICH HOLD THE ADDRESS OF OTHER DATATYPES
	
int a=3;
int* b;
b = &a;          // here,  &    --->  	address of operator

//                             *    ---->   derefernce operator



//(address of) operator
	cout<<"give the address of "<< &a << endl;
	cout<<"give the address of "<< b << endl;
	
	
	
//(value at ) operator
cout<<" the value at the address of "<< *b << endl;	
	

//pointer to pointer

int**c=&b;

cout<<"the address of b is"<<&b<<endl;
cout<<"the address of b is"<<c<<endl;

cout<<"the value at adress c is "<<*c<<endl;
cout<<"the value at adress value at (value at (c))"<<**c<<endl;
		return 0;
}









