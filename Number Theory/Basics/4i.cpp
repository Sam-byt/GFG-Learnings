// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
const int M = 1e9 + 7;
class Solution{
    int t[1002][802];
private:
    int solve(int n, int r){
        
        if(r==0 || n==r)return 1;
        
        if(r==1)return n;
        
        if(t[n][r] != -1)return t[n][r];
        
        return t[n][r] = (solve(n-1,r)%M+solve(n-1,r-1)%M)%M;
    }
public:
    int nCr(int n, int r){
        // code here
        // if(r==0 || n==r)return 1;
        
        // if(r==1)return n;
        
        // double temp = 1;
        
        // for(int i=1; i<=r;i++){
        //     temp = temp*(n-r+i)/i;
        // }
        
        // return (int)temp%M;
        if(r>n)return 0;
        memset(t,-1,sizeof(t));
        return solve(n,r)%M;
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
