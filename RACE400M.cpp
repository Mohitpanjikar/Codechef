#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;

	    int min_num = min(x,min(y,z));
	    if(min_num == x) cout<<"ALICE"<<endl;
	    else if(min_num == y) cout<<"BOB"<<endl;
	    else cout<<"CHARLIE"<<endl;
	    
	}
	return 0;
}
