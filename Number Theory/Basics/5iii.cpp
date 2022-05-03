// { Driver Code Starts
//Initial template for C++

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;


 // } Driver Code Ends
//User function template for C++

cpp_int nCr(int n, int r){
    
    if(r>n)return 0;
    if(n == r)return 1;
    if(r == 0)return 1;
    if(r==1)return n;
    
    cpp_int ans = 1;
    
    for(int i=1;i<=r;i++){
        ans = ans * (n-r+i)/i;
    }
    
    return ans;
        
}
class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        //code here
        return nCr(2*n,n)/(n+1);
        
    }
};

// { Driver Code Starts.

int main() 
{
    //taking count of testcases
	int t;
	cin>>t;
	while(t--) {
	    
	    //taking nth number
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}  // } Driver Code Ends
