/*************Triangle pattern-*************/



//#include <iostream>
//using namespace std;
//
//int main(){
//	int x;
//	cout<<"enter the value of x "<<endl;
//	cin>>x;
//	for(int i=1;i<=x;i++){
//		for(int n=1;n<=x;n++){
//			for(i=1;i<=n;i++){
//				cout<<"*"<<" ";
//			}
//			cout<<endl;
//		}
//	}
//	return 0;
//}
/************other solution********************/



#include <iostream>
using namespace std;

int main(){
	 int x;
	 cout<<"enter the value of x "<<endl;
	 cin>>x;
	 for(int i=1;i<=x;i++){
	 	for(int j=1;j<=i;j++){
	 		cout<<"*";
		 }
		 cout<<endl;
	 }
	 return 0;
}






