#include <bits/stdc++.h>
using namespace std;

int maximum(int a[],int n){
	int value=0;
	for(int i=0;i<n;i++){
		value=max(value,a[i]);
	}
	return value;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	cout<<maximum(arr,n);
	return 0;
	
	
}


/*******************gfg solution***********************/


//int maxValue(int a[],int n){|
//int value=a[0];
//for(int i=0;i<n;i++){
//	if(value<a[i]){
//		value=a[i;]
//	}
//}
//return value;
//}




