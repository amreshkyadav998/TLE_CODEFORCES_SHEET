#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; cin>>t;
    while(t--){
         int n;
    string s;
    cin>>n>>s;
    int cnt=0, ct=0, mx=0;
    for(char c : s)
    {
        if(c == '.')
        {    
            cnt++;
            ct++;
        }
        if(c == '#')
        {
            mx=max(mx,ct);
            ct=0;
        }  
    }
    mx=max(ct,mx);
    if(cnt==0)
        cout<<0<<endl;
    else if(mx>2)
        cout<<2<<endl;
    else 
        cout<<cnt<<endl;
}
return 0;
}