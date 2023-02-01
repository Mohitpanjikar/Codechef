#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int zeroCount = 0;
	    int oneCount = 0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            zeroCount++;
	        }
	        else oneCount++;
	    }
	    if(oneCount == 0) cout<<0<<endl;
	    else if(zeroCount == 0) cout<<1<<endl;
	    else if(oneCount>zeroCount) cout<<zeroCount+1<<endl;
	    else cout<<oneCount<<endl;
	}
	return 0;
}
