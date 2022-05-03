// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
const int M = 1e9 + 7;
class Solution{
public:
    int nCr(int n, int r){
        if(r>n)return 0;
        
        int t[1002][802];
        
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=r;j++)
                t[i][j] = j==0?1:(i==0?0: (t[i-1][j]%M + t[i-1][j-1]%M)%M);
        }
        
        return t[n][r]%M;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends
