// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    typedef long long ll;
    private:
    ll gcd(ll a, ll b){
        if(a == 0)return b;
        if(b == 0)return a;
        
        if(a == 1)return 1;
        if(b == 1)return 1;
        
        if(a == b)return a;
        
        return a>b?gcd(b,a%b):gcd(a,b%a);
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        ll ans = gcd(A,B);
        return {(A*B)/ans , ans};
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends
