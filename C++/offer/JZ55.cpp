
public class Solution {
    int res = 0;
    public int TreeDepth(TreeNode root) {
        dfs(root,1);
        return res;
    }
    void dfs(TreeNode root,int d){
        if(root == null) return;
        if(root != null  && d > res) res =d;
        dfs(root.left , d+1);
        dfs(root.right , d+1);
    }
}

