class Solution{
    public:
    
    bool isSafe(vector<vector<int>> &m, vector<vector<bool>> &visited, int srcx, 
        int srcy, int n)
    {
        // out of bount case
        if(srcx < 0 || srcy < 0 || srcx >= n || srcy >= n){
            return false;
        }       
        else if(visited[srcx][srcy] == true) {
            return false;
        }
        else if(m[srcx][srcy] == 0) {
            return false;
        }
        return true;
    }
    
    void solveRat(vector<vector<int>> &m, vector<vector<bool>> &visited, vector<string>& ans,
    int n, int srcx, int srcy, int dstx, int dsty, string output)
    {
        if(srcx == dstx && srcy == dsty) {
            ans.push_back(output);
            return;
        }  
        
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        char path[] = {'U', 'D', 'L', 'R'};
        
        for(int i = 0; i<4; ++i) {
            int newx = srcx + dx[i];
            int newy = srcy + dy[i];
            if(isSafe(m, visited, newx, newy, n)){
                // marking src x&y visited
                // cout<<"Inside UP path"<<endl;
                visited[newx][newy] = true;
                solveRat(m, visited, ans, n, newx, newy, dstx, dsty, output + path[i]);
                // backtracking visited marking false
                visited[newx][newy] = false;
            }
        }
        
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<vector<bool> > visited(n, vector<bool>(n, 0));
        string output = "";
        vector<string> ans;
        int srcx = 0, srcy = 0;
        int dstx = n-1, dsty = n-1;
        visited[0][0] = true;
        
        if(m[0][0] == 0) {
            return ans;
        }
        
        solveRat(m, visited, ans, n, srcx, srcy, dstx, dsty, output);
        
        return ans;
    }
};