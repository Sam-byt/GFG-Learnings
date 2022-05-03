// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int geekNumber(int N){
        // code here
        int temp;
        for(int i=2;i*i<=N;i++){
            if(N%i == 0){
                temp = N/i;
                if(temp%i == 0)return false;
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        if(ob.geekNumber(N))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}  // } Driver Code Ends
