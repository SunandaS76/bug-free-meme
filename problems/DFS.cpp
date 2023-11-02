// Iterative DFS

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        stack<int>st;
        vector<bool>visited(V, false);
        st.push(0);
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(!visited[node])
                {cout<<node<<" ";
                visited[node] = true;}
            for(auto x: adj[node]){
                if(!visited[x])
                    st.push(x);
            }
        }
        return {};
        
    }


    // Recursive DFS

    class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs_helper(vector<int> adj[], vector<bool>&visited, int c){
        cout<<c<<" ";
        visited[c] = true;
        for(auto x: adj[c]){
            if(!visited[x]) dfs_helper(adj, visited, x);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V, false);
        for(int i=0; i<V; i++)
            if(!visited[i]) 
                dfs_helper(adj, visited, i);
        return {};
        
    }
};