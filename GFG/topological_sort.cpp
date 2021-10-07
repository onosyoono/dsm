class Solution
{
	public:
	
	// dfs traversal of the given Directed Acyclic Graph (DAG)
	void dfs(int s, vector<int>& v, vector<bool> &vis, 
	vector<int> adj[])
	{
	    vis[s] = true;
	    
	    // visit all neighbours of the current node which are not 
	   // yet visted
	    for (auto &neighbour : adj[s])
	    {
	        if (vis[neighbour]) 
	        {
	            continue;
	        }
	        
	        // visit neighbout
	        dfs(neighbour, v, vis, adj);
	    }
	    
	    // push current node after visiting all of its neighbours
	    v.push_back(s);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> v; // topological ordering
	    
	    // visited array to keep track of visited nodes
	    vector<bool> vis(V+1, false); 
	    
	    for (int node=0;node<V;node++)
	    {
	        if (vis[node]) continue;
	        dfs(node, v, vis, adj);
	    }
	    
	    // reversing the vector for correct ordering
	    reverse(v.begin(), v.end());
	    
	    return v;
	}
};