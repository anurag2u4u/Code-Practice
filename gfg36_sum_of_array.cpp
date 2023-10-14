#include <iostream>
using namespace std;

int sum(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++)
	{
		count=count+a[i];
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<sum(arr,n);
return 0;	
}




