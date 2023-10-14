//#include <iostream>
//using namespace std;
//
//	int min(int x, int y){
//		if(x<=y){
//			return x;
//		}
//		else{
//			return y;
//		}
//	}
//	
//int main(){
//	int a,b;
//	cin>>a>>b;
//    int x=min(a,b);
//		
//	for(int i=x;i>0;i--){
//		if((a%i==0)&&(b%i==0)){
//			cout<<i;
//			break;
//		}
//		
//	}
//	return 0;
//}



#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int x=min(a,b);
	
	int ans=1;
	for(int i=1;i<=x;i++){
		if(a%i==0 and b%i==0){
			ans=i;
		}
	}
	cout<<ans;
	
}



