#include <iostream>
using namespace std;
double average(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++)
	{
		count=count+a[i];
	}
return count/double(n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<average(arr,n);
	return 0;
}







