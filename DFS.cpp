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