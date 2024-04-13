#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            int A = arr[i]-j;
            maxi = max(A, maxi);
            j = arr[i];
        }
        int B = ((m-arr[n-1])*2);
        maxi = max(maxi,B);
        cout<<maxi<<endl;
        
    }
}