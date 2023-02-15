#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int aa,bb,cc;
	    cin>>aa>>bb>>cc;
	    
	    int min_values = min(bb,cc);
	    bb = bb-min_values;
	    cc = cc-min_values;
	    
	    if(bb<cc){
	        aa = aa-bb;
	        bb = bb-bb;
	        if(aa>cc){
	            cout<<"YES"<<endl;
	            continue;
	        }
	        else{
	            cout<<"NO"<<endl;
	            continue;
	        }
	    }
	    else{
	        aa = aa-cc;
	        cc = cc-cc;
	         if(aa>bb){
	            cout<<"YES"<<endl;
	            continue;
	        }
	        else{
	            cout<<"NO"<<endl;
	            continue;
	        }
	    }
	}
	return 0;
}
