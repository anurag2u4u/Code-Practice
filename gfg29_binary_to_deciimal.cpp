#include <bits/stdc++.h>
using namespace std;



int main(){
	
	int x;
	int y=0,z=0,i=0;
	cin>>x;
	
	while(x>0){
		y=(x%10)*pow(2,i);
		x=x/10;
		z=z+y;
		i++;
			}
	cout<<z;
	
	return 0;
}
