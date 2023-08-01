#User function Template for python3

class Solution:
    def dfs(self,visited, ans, adj, current):
        visited[current]=True
        ans.append(current)
        for i in adj[current]:
            if(visited[i]==False):
                self.dfs(visited, ans, adj, i)
    #Function to return a list containing the DFS traversal of the graph.
    def dfsOfGraph(self, V, adj):
        visited=[False for i in range(V)]
        ans=[]
        for i in range(V):
            if(visited[i]==False):
                self.dfs(visited, ans, adj, 0)
        return ans

#{ 
 # Driver Code Starts

if __name__ == '__main__':
    T=int(input())
    while T>0:
        V,E=map(int,input().split())
        adj=[[] for i in range(V+1)]
        for i in range(E):
            u,v=map(int,input().split())
            adj[u].append(v)
            adj[v].append(u)
        ob=Solution()
        ans=ob.dfsOfGraph(V,adj)
        for i in range(len(ans)):
            print(ans[i],end=" ")
        print()
        T-=1
# } Driver Code Ends