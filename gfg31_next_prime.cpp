#include <iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	int y=x+1;
	
	
		for(int i=2;i<y;i++){
			if(y%i==0){
				continue;
			}
			else if(i==y-1){
				cout<<y;
				break;
			}
	    }
	
	
	return 0;
	
	
}
