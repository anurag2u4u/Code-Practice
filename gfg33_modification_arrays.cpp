/*******      using for loop   *************/


#include <iostream>
using namespace std;

//int main(){
//	int arr[]={10,40,30};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++){
//		arr[i]=arr[i]*2;
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}




/*************using range based for loop******************/

int main(){
	int arr[]={10,40,30};
	for(int&x:arr){
		cout<<2*x<<" ";
	}
	return 0;
}




