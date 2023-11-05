#include <iostream>

using namespace std;

int c=56;                                /*this is how we take GLOBAL VALUE*/

 int main(){
 	
// 	int a,b,c;
// 	
// 	cout<<"enter the value of a:"<<endl;
// 	cin>>a;
// 	cout<<"enter the value of b:"<<endl;
// 	cin>>b;
// 	
// 	c = a + b; 
// 	
// 	cout<<"the sum of c is "<<c<<endl;
// 	cout<<"the global c is "<<::c;       /*this line is used for printing the global value*/






//********************Float,double and long double literals*********************


 	 
// 	float d=34.4F;         /*small 'F' is used to specify the given no. is float*/
// 	
// 	long double e=34.4L;    /* small 'L' is used to specify the the given no. is long double*/
//                               
//  This concept is used in function overloading.
//
//	cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;						   
//	cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;			
//	cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;			
//	cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;			
//	cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;			
//				
// 	
// 	cout<<"The value of d is "<<d<<endl;
//	 cout<<"the value of e is"<<e;


//************************Reference variables******************************
// Anurag -->  golu--> bhaiya   (means same variables can have different name.)


//float x=455;
//float & y=x;
//cout<<x<<endl;
//cout<<y<<endl;

//************************Typecasting******************************

int a = 45;
float b = 45.4687;


    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;

int c = int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;


 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
