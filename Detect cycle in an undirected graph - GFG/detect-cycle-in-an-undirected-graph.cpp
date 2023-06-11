//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool cycledfs(vector<int> adj[],bool visited[], int node, int parent){
      visited[node]=1;

      for(auto x:adj[node]){
            if(!visited[x]){
              visited[x]=1;
              bool cycle=cycledfs(adj,visited,x,node);
              if(cycle)
              {
                  return 1;
              }
            }
            else if(x!=parent){
                return 1;
             }
          
      }
      return 0;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        bool visited[V]={0};
        
      /*  for(int i=0;i<V;i++){
        cout<<"head #"<<i;
        for(auto x : adj[i]){
            cout<<"->"<<x;
        }
        cout<<endl;
    }*/
        int parent=-1;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                bool ans=cycledfs(adj,visited,i,parent);
                if(ans==1){
                    return 1;
                }
            }
        }
        
        return 0;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends