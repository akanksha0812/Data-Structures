
class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector<int>vis(V,false);
      queue<int>q;
      q.push(0);
     int level=0;
      while(!q.empty()){
         
          int sz=q.size();
          for(int i=0;i<sz;i++){
              int u=q.front();
              q.pop();
              vis[u]=true;
              if(u==X) return level;
              for(int &v:adj[u]){
                  if(!vis[v]){
                      q.push(v);
                  }
              }
              
          }
           level++;
      }
      return -1;

	}
};
