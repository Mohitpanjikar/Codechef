#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        //initializing variables
        int n;
        cin>>n;
        int arr_a[n];
        int arr_b[n];
        vector<int> intotal_Array;
     
        //value inserting in the array
        for(int i=0;i<n;i++)    
            cin>>arr_a[i];
        for(int j=0;j<n;j++)    
            cin>>arr_b[j];
     
        
        for(int i=0;i<n;i++)
            intotal_Array.push_back(arr_a[i]);
        
        for(int i=0;i<n;i++)
            intotal_Array.push_back(arr_b[i]);
        
        sort(intotal_Array.begin(),intotal_Array.end());
     
        int distance =intotal_Array[n-1]-intotal_Array[0];
        
        for(int j=0;j<=n;j++){
            distance = min(intotal_Array[j+n-1]-intotal_Array[j],distance);
         }
     cout<<distance<<endl;
    }
    return 0;
}