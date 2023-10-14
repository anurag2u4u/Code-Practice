56#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
//	int a,b,c;
//	cout<<"enter the value of a"<<endl;
//	cin>>a;
//	cout<<"enter the value of b"<<endl;
//	cin>>b;
//	cout<<"enter the value of c"<<endl;
//	cin>>c;
//	
//	if(a>b){
//		if(a>c){
//			cout<<a;
//		}
//		else{
//			cout<<c;
//		}
//	}
//	
//	else{

//		if(b>c){
//			cout<<b;
//		}
//		else{
//			cout<<c;
//		}
//	}

//////*************gfg method*****************///////////

	int a,b,c;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	cout<<"enter the value of c"<<endl;
	cin>>c;
	
	
	if(a>=b and a>=c){
		cout<<a;
	}
	else if(b>=a and b>=c){
		cout<<b;
	}
    else{
    	cout<<c;
	}

return 0;
}














