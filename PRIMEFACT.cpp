#include <iostream>
using namespace std;

int prime_factor(int x){
     if(x%2==0){
        return 2;
    }
    	int min_factor=0; 
	    for(int i=3;i<=x;i++){
	        if(x%i == 0){
	            min_factor = i;
	            break;
	        }
	    }
	return min_factor;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int count = 0;
	    //increasing the count + checking logic - 
	    while(x<y){
	        x=x+prime_factor(x);
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
