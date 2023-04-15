
public class seven_code {
    static int[][] a = new int[8][8];// 七个灯
    static int[] b = new int[8];// 标记打开或者关闭
    static int[] c = new int[8];// 存放并查集
    static int sum=0;
    static int count = 0;
	 public static void main(String args[]) {
		 a[1][2] = a[1][6] = 1;
	        a[2][1] = a[2][3] = a[2][7] = 1;
	        a[3][2] = a[3][7] = a[3][4] = 1;
	        a[4][3] = a[4][5] = 1;
	        a[5][4] = a[5][6] = a[5][7] = 1;
	        a[6][5] = a[6][7] = a[6][1] = 1;
	        a[7][6] = a[7][2] = a[7][5] = a[7][3] = 1;
	        dfs(1);
	        System.out.println(count);
	 }
	 public static void dfs(int n) {
		 if(n>7) {
			sum=0;
			for(int i=0;i<c.length;i++) {
				c[i]=i;
			}
			for(int i=1;i<8;i++)sum+=b[i];
			for(int i=1;i<8;i++) {
				for(int j=1;j<8;j++) {
					if(b[i]==1 && b[j]==1 && a[i][j]==1 ) {
						union(i, j);
					}
				}
			}
				
			if(sum==1)count++;
	
			return;
		 }
		 b[n]=0;
		 dfs(n+1);
		 b[n]=1;
		 dfs(n+1);
	 }
	 public static int findHead(int x) {
		 while(c[x]!=x) {
			 x=c[x];
		 }return x;
		 
	 }
	 public static void union(int x ,int y) {
		 int xhead = findHead(x);
		 int yhead = findHead(y);
		 if(xhead == yhead) return;
		 if(xhead > yhead) {
			 sum--;
			 c[yhead]= xhead;
		 }
		 if(yhead>xhead) {
			 sum--;
			 c[xhead]=yhead;
		 }
	 }
	 

}
class findUnion{
    int[] parent;
    int sum=0;
    findUnion(int  n,int opens){
   	 parent =new int[n];
   	 sum = opens;
   	 for(int i=0;i<n;i++) {
   		 parent[i]=i;
   	 }
   	 
    }
    
    public int getHead(int x) {
   	 while(x!=parent[x]) {
   		 x=parent[x];
   	 }
   	 return x;
    }
    public void union(int x,int y) {
   	 int xhead = getHead(x);
   	 int yhead = getHead(y);
   	 if(xhead == yhead) return;
   	 if(xhead > yhead) {
   		 parent[yhead]=xhead;
   		 sum--;
   	 }
   	 if(yhead>xhead) {
   		 parent[xhead]=yhead;
   		 sum--;
   	 }
   	 
    }
}


