#include <iostream>
//using namespace std;
//
//		int main(){
//			int n,d;
//			cout<<"enter the current day "<<endl;
//			cin>>d;
//			cout<<"enter no. of days "<<endl;
//			cin>>n;
//		
//        cout<<(((d-(n%7))+7)%7)<<endl;
//	return 0;
//}

/*****************using iterative method********************/
#include <iostream>
using namespace std;

int main(){
	int n,d;
	cout<<"enter no. of days --'n' "<<endl;
	cin>>n;
	cout<<"enter the current day --'d' "<<endl;
	cin>>d;
	
	int t=n%7;
	int p=d-t;
	
	if(p<0){
		cout<<"the day before"<<n<<"days is"<<p+7;
	}
	else{
		cout<<"the day before"<<n<<"days is"<<p;
	}
	return 0;
}






















