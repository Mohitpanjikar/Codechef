#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int value_sum = x+y+z;
	    if(value_sum > 5) cout<<"Yes"<<endl;
	    else    cout<<"No"<<endl;
	}
	return 0;
}
