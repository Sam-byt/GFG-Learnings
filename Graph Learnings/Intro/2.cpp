// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        vector<bool>visited(V,false);
        int temp;
        vector<int>ans;
        // // for(int i=0; i<V; i++){
        //     if(!visited[0]){
                q.push(0);
                visited[0] = true;
                ans.push_back(0);
                while(!q.empty()){
                    temp = q.front();
                    q.pop();
                        for(auto j : adj[temp]){
                            if(!visited[j]){
                                visited[j] = true;
                                ans.push_back(j);
                                q.push(j);
                            }
                        }
                    }
            // }
        // }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
