#include <iostream>
using namespace std;
 
 int fun(int,int){
 	static int x=1;
 	int y=2;
 	x++;
 	y++;
 	cout<<x<<" "<<y<<endl;
 }
 int main(){
 	int a,b;
 	fun(a,b);
 	fun(a,b);
 	fun(a,b);
 return 0;
 	
 }
