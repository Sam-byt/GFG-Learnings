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
        
        vector<int>prev(r+1,0),curr(r+1,0);
        prev[0] = 1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=r;j++)
                curr[j] = j==0?1:(prev[j]%M + prev[j-1]%M)%M;
            prev = curr;
        }
        
        return prev[r]%M;
        
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
