#include <iostream>
using namespace std;
int main(){
	int n,x;
	cout<<"enter the value of 'n' "<<endl;
	cin>>n;
	cout<<"enter the value of 'x' "<<endl;
    cin>>x;
	
	for(int i=1;i<=n;i++){
		
	    if(i%x==0)
		{
			continue;
		}
		
	cout<<i<<endl;
	
	}
	return 0;
		
}
