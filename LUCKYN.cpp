#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int num,digit;
	    bool flag = 0;
	    cin>>num;
	    
	    while(num!=0){
	    int digit = num%10;
	    if(digit == 7){
	        flag = 1;
	    }
	    num = num/10;
	}
	
	if(flag) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	}
	return 0;
}
