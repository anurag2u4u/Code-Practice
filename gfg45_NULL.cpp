#include<iostream>
using namespace std;
int fun(int*x){

	cout<<"1";
	
}
/*int fun(int*x){
	cout<<"0";
}*/
int main(){
	int*ptr=nullptr;
	fun(ptr);
	return 0;
}
