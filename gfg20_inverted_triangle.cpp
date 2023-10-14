/*       inverted triangle     */




//#include <iostream>
//using namespace std;
//int main(){
//	int x;
//	cout<<"enter the value of x "<<endl;
//	cin>>x;
//	
//	for(int j=1;j<=x;j++){
//		for(int i=1;i<=x;i++){
//			if(i<=x-j){
//				cout<<" ";
//			}
//			else{
//				cout<<"*";   //observe -->cout<<"*"<<" ";    what are results and why?
//			}
//		}cout<<endl;
//	}
//}


/******GFG solution*******/


#include <bits/stdc++.h>
using namespace std;

int main(){
	int i=1;
	int n;
	cin>>n;
	
	while(i<=n){
		int j=1;
		while(j<=n-i){
			cout<<" ";
			j++;
		}
		while(j<=n){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}









