/******** CHECK WHY DOES my CODE NOT WORK FOR COUNTING DISTICT*****/
/****WRITE REASON HERE*----*/


//#include <iostream>
//using namespace std;
//
//int total_count(int a[],int n){
//	int val,count =0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<i;j++){
//			if(a[i]==a[j]){
//				break;
//			}
//			else{
//		         count++;
//			}
//		}
//	}
//	return count;
//}
//
//int main(){
//	int n;
//	int arr[n];
//	
//	cout<<"enter the value of size of the array"<<endl;
//	cin>>n;
//	for(int i=0;i<n;i++){
//	     
//		cout<<"the value of term"<<i<<endl;
//		cin>>arr[i];
//	}
//	cout<<total_count(arr,n);
//	
//	return 0;
//}



/******      gfg solution ****************/

#include <iostream>
using namespace std;

int countDistinct(int a[],int n){
	int count =0;
	bool isDistinct=true;
	
	for(int i=0;i<n;i++)
	{
	  isDistinct=true;
	  for(int j=i-1;j>=0;j--)
	  {
	   if(a[i]==a[j]){
	   	isDistinct=false;
	   	break;
	   }	
	  }
	  if(isDistinct==true){
	  	count++;
	  }	
	}
	return count;
}



int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<countDistinct(a,n);
	return 0;
}













