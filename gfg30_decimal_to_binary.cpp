#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	int y=0,val=0;
	cin>>x;
	
	for(int i=0;x>0;i++){
		y=(x%2)*pow(10,i);
		val=val+y;
		x=x/2;
	}
	cout<<val;
}



/*********gfg solution**************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool>v;
    while(n > 0)
    {
        int t = n % 2;
        v.push_back(t);
        n /= 2;
    }
    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    return 0;
}









