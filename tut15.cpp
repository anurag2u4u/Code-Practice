#include <iostream>
using namespace std;
 
 int sum(int a,int b); //---->this is FUNCTION PROTOTYPE
 
 //int sum(int a,b)--->not acceptable
 //int sum(int ,int)---> acceptable
 
void g();
//void g(void)---->also acceptable

 int main(){
 	int num1, num2;
 	//num1 and num2 are ACTUAL PARAMETERES
 	cout<<"give the first value"<<endl;
 	cin>>num1;
 	cout<<"give the second value"<<endl;
 	cin>>num2;
 	cout<<"the sum is "<<sum(num1,num2);
 	g();
 	return 0;
 }
 
 
 	int sum(int a,int b){  
 	int c=a+b;             //----->this is a FUNCTION 
 	return c;              //int a,int b are FORMAL PARAMETERES	 	  
 }


void g(){
	cout<<"\n hello world"<<endl;
}
