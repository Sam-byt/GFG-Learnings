// { Driver Code Starts



#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends


class Solution{
    pair<int,int> extended_gcd(int a, int b){
        
        if(a == 0)return {0,1};
        if(b == 0)return {1,0};
        
        pair<int,int> temp = extended_gcd(b,a%b);
        
        int x = temp.second;
        int y = temp.first - (a/b)*temp.second;
        
        return {x,y};
    }
public:
    vector<int> gcd(int a, int b){
        // code here
        pair<int,int> ans = extended_gcd(a,b);
        return {__gcd(a,b),ans.first,ans.second};
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        Solution ob;
        vector<int> v = ob.gcd(a,b);
        if(v.size()!=3)
            return 0;
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
    return 0; 
}  // } Driver Code Ends
