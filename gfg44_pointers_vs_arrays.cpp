#include<iostream>
using namespace std;

int main(){
	int arr[]={10,20,30};
	int*ptr=arr;
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<*(arr+2)<<endl;// we shoud use arr[2] instead of *(arr+2)
	cout<<ptr[2]<<endl;// we should use *(ptr+2) instead of ptr[2]
	
	return 0;
	
}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[]={10,20,30};
//	int*p1=arr;
//	int(*p2)[3]=&arr;
//	cout<<*p1<<endl;
//	cout<<*p2<<endl;
//	
//	return 0;
//}









