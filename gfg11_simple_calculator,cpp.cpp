#include <iostream>
using namespace std;
int main(){
	int op,x,y;
	cout<<"enter the operation "<<endl;
	cin>>op;
	cout<<"enter the values of x and y "<<endl;
	cin>>x>>y;
	switch(op){
		case 1:
			cout<<x+y;
			break;
		
		case 2:
			cout<<x-y;
			break;
			
		case 3:
		    cout<<x*y;
			break;	
		
		default:
		    cout<<"invalid operation"<<endl;	
	}
	return 0;
}
