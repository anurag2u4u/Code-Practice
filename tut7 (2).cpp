#include <iostream>
using namespace std;

int c=56;

 int main(){
 	int a,b,c;
 	
 	cout<<"enter the value of a:"<<endl;
 	cin>>a;
 	cout<<"enter the value of b:"<<endl;
 	cin>>b;
 	
 	c = a + b; 
 	
 	cout<<"the sum of c is "<<c<<endl;
 	cout<<"the global c is "<<::c;       /*this line is used for printing the global value*/
 	
 	
 	return 0;
 }
