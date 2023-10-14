#include <iostream>
using namespace std;

int fun(int x){
while(x>10){
	x=x/10;
}		
return x;
}
int main(){
	int a;
	cin>>a;
	cout<<fun(a);
	return 0;
}
