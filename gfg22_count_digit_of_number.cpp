//#include <iostream>
//using namespace std;
//
//int main(){
//	int x;
//	int i=1;
//	cin>>x;
//    
//    while(x>10){
//    	x=x/10;
//    	i++;
//	}
//	cout<<i;
//}


/**************************/

//#include <iostream>
//using namespace std;
//
//int main(){
//	int x;
//	int j;
//	cin>>x;
//	for(int i=1;x>10;i++){
//		x=x/10;
//	    j=i;	
//	}
//	cout<<j+1;
//	return 0;
//}


/*******gfg solution**********/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int count=0;
	
	int n;
	cin>>n;
	
	while(n>0){
		n=n/10;
		count++;
	}
	cout<<count;
}


















