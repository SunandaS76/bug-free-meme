vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int>q;
        vector<bool>visited(V, false);
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(!visited[node])
            cout<<node<<" ";
            visited[node] = true;
            for(auto x: adj[node]){
                if(!visited[x]) 
                    q.push(x);
            }
        }
        return {};
    }
