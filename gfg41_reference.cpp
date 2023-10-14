//#include<iostream>
//using namespace std;
//void fun(int&x){
//	x=x+5;
//}
//int main(){
//	int x=10;
//	fun(x);
//	cout<<x;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//void fun(string&s){
//	cout<<s;
//}
//int main(){
//	string s="anurag is hero";
//	fun(s);
//	return 7;
//}



/*  RANGE BASED FOR LOOPS & REFERENCES  */

#include<iostream>
using namespace std;

int main(){
	int arr[]={10,20,30};
	
for(int&x:arr){
	x=x*2;
}
for(int x:arr){
	cout<<x<<endl;
}	
return 0;
}
