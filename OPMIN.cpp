#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count = 0;
	    
	    if(n==1){
	        cout<<"0"<<endl;
	        continue;
	    }
	 
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr + n);
	    int min_value = arr[0];
	    
	    for(int i=0;i<n;i++){
	        if(min_value != arr[i]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
