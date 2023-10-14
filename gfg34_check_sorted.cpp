//#include <iostream>
//using namespace std;
//int main(){
//	int arr[]={20};
//	int n=sizeof(arr)/(sizeof arr[0]);
//    if(n==0 or n==1){
//	cout<<"yes";
//		}
//	else if(n>2){	
//	for(int i=0;i<n;i++){
//      if(arr[i+1]<arr[i]){
//      	cout<<"no";
//      	break;
//	  }
//	  else{
//	  	cout<<"yes";
//	  	break;
//	  }
//	  }
//	}
//}



/**************GFG SOLUTION*******************/


#include <iostream>
using namespace std;

bool sorted(int a[],int n){
	for(int i=0;i<=n;i++){
		if(a[i-1]>a[i]){
			return false;
		}
		else{
			return true;
		}
	}
} 



int main(){
	int n;
    cout<<"enter the value of n ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cout<<"enter the value of "<<i<<endl;
    	cin>>arr[i];
	}
	if(sorted(arr,n)==false){
		cout<<"not sorted";
	}
	else{
		cout<<"sorted";
	}
    
return 0;	
}









