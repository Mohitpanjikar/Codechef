#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int remain;
	    
	    if(y>x)
	    cout<<z<<endl;
	    
	    else if(x%y==0)
	    cout<<(x/y)*z<<endl;
	    
	    else if(x%y!=0){
	        remain =x/y;
	        cout<<(remain+1)*z<<endl;
	    }
	    
	}
	return 0;
}
