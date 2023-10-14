//#include<iostream>
//using namespace std;
//
//void fun(int arr[])
//{
//	int n=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//int main(){
//	int arr[]={10,20,30,40};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	fun(arr);
//	return 0;
//}

/*INCREMENT IN ARRAY BY 1*/
#include<iostream>
using namespace std;

void incr(int arr[],int n)
{
	for(int i=0 ;i<n; i++)
	{
	arr[i]++;
	}
}
int main(){
	
	int arr[]={10,20,30};
	int size=sizeof(arr)/sizeof(arr[0]);
	incr(arr,size);
	
	for(int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}
	return 0;
}









