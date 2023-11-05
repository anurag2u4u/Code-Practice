#include <iostream>
using namespace std;

		int main(){
			int n,d;
			cout<<"enter the current day "<<endl;
			cin>>d;
			cout<<"enter no. of days "<<endl;
			cin>>n;
		
        cout<<(((d-(n%7))+7)%7)<<endl;
	return 0;
}











