#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
    int n;
    cin>>n;
    
    int arr[n];
    int brr[n];
        
    for(int i=0;i<n;i++)
       cin>>arr[i];

    for(int j=0;j<n;j++)
       cin>>brr[j];
   
    stack<int> str;
    str.push(0);
 
    for(int i=1;i<n;i++){
        if(arr[str.top()]<arr[i]){
                while(str.empty()==false){
                    str.pop();
                }
                str.push(i);
      }
      else if(arr[str.top()]==arr[i]){
          str.push(i);
        }
    }
    int max_brr=-1;
    int max_value=-1;
    
    if(str.size()==1)
       cout<<str.top()+1<<endl;
    else{
        int ans=arr[str.top()];
        for(int k=0;k<n;k++){
            if(brr[k]>max_brr && arr[k]==ans){
               max_brr=brr[k];
               max_value=k;
            }
        }
       cout<<(max_value+1)<<endl;
    }    
}
    return 0;
}