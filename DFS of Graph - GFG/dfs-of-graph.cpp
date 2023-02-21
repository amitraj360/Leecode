//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int vs[], int V, vector<int>&x, vector<int> adj[],int i)
    {
        if(vs[i]==0)
        {
            vs[i]=1;
            x.push_back(i);
            for(auto j:adj[i])
            {
                dfs(vs, V, x, adj,j);
            }
        }
        if(vs[i]==1)
        return;
    }
    
    
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vs[V]={0};
        //vs[0]=1;
        vector<int>x;
      //  x.push_back(0);
        dfs(vs, V, x, adj,0);
        return x;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends