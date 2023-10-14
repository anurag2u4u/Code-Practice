#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b; 
	
	int x=max(a,b);
	
	int ans=1;
	
	
	for(int i=x;i<=(a*b);i++){
		if(i%a==0 and i%b==0){
			ans=i;
			break;
		}
	}
	cout<<ans;
}
