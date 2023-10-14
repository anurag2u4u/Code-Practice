#include <iostream>
using namespace std;

int fun(int x){
	if(x==0){
		return 0;
	}
	cout<<"anurag"<<endl; //no need to write else statement here
	fun(x-1);
	
}
int main(){
	fun(3);             //no need to define a variable.s
}

