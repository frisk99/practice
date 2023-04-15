
class nums_land {
    public int numIslands(char[][] grid) {
        if(grid ==null || grid.length==0 || grid[0].length ==0) return 0;
        findUnion1 fu = new findUnion1(grid);
        int len1 = grid.length,len2=grid[0].length;
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(grid[i][j] =='0') continue;
                if(i-1>0 && grid[i-1][j] == '1')
                    fu.union(i*len2 +j , (i-1)*len2 +j);
                if(j-1>0 && grid[i][j-1] == '1' )
                    fu.union(i*len2 +j,i*len2 +j-1);
                if(i+1<len1 && grid[i+1][j] == '1')
                    fu.union(i*len2+j,(i+1)*len2 +j);
                if(j+1<len2 && grid[i][j+1] == '1' )
                    fu.union(i*len2+j,i*len2+j+1);
                    
            }
        }
        return fu.sum;

    }
}
class findUnion1{
    int sum=0;
    int[] parent;
    //int[] size;
    findUnion1(char[][] grid){
        int len1 = grid.length,len2 = grid[0].length;
        sum=len1*len2;
        parent = new int[sum];
        //size  = new int[sum];
        sum=0;
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                parent[i * len2 +j]=i * len2 +j;
                if(grid[i][j] =='1') {
                   // size[i*len2 + j] = 1;
                    sum++;
                }
                //else size[i*len2+j]=0;
                }

        }
    }
    public int getHead(int x){
        while(x!=parent[x]){
            x= parent[x];
        }
        return x;
    }
    public void union(int x ,int y){
        int xHead = getHead(x);
        int yHead = getHead(y);
        if(xHead == yHead) return;
        else if(xHead > yHead){
            parent[yHead]=xHead;
            //size[xHead]+=size[yHead];
            sum--;
        }else if (xHead < yHead){
            parent[xHead]=yHead;
            //size[yHead]+=size[xHead];
            sum--;
        }
    }
}