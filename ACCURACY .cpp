#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int n,x;
	cin>>n;
	if(n%3 != 0){
	    x=(n/3)+1;
	    cout<<(x*3)-n<<endl;
	}
	else{
	cout<<"0"<<endl;
	}
}
	return 0;
}
