class Solution {
public:
    bool dfs(int a,int b,vector<vector<char> >& matrix, string &word,int k){
        if(matrix[a][b] != word[k] ) return false;
        if(k == word.size()-1) return true;
        int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
        char t = matrix[a][b];
        matrix[a][b] = '*';
        for(int i=0;i<4;i++){
            int x = a + dx[i], y = b + dy[i];
           if (x >= 0 && x< matrix.size() && y >= 0 && y< matrix[a].size()) {
               if (dfs(x,y,matrix,word,k+1)) return true;
            	///wrong
            	//dfs(x,y,matrix,word,k+1)
            }
        }
         matrix[a][b] = t;
        return false;
    }
    bool hasPath(vector<vector<char> >& matrix, string word) {
        // write code here
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(dfs(i,j,matrix,word,0))
                return true;
        }

       }
       return false; 
    }
};
