import java.util.Scanner;

public class dijkstra {
	public static void main(String args[]) {
		int[] dis = new int[1000];
		int[] path = new int[1000];
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int[][] grid = new int[n+1][n+1];
		int[] add = new int [n+1];
		int m = scan.nextInt();
		for(int i=0;i<=n;i++) {
			for(int j=0;j<=n;j++) {
				grid[i][j]=-1;
				if(i==j)grid[i][j]=0;
			}
		}
		for(int k=0;k<n;k++) {
			add[k+1]= scan.nextInt();
		}
		add[1]=0;
		add[n]=0;
		for(int k=0;k<m;k++) {
			int i =scan.nextInt();
			int j =scan.nextInt();
			int len = scan.nextInt();
			grid[i][j]=len+add[j];
			grid[j][i]=len+add[i];
		}
		for(int i=1;i<=n;i++) {
			dis[i]= Integer.MAX_VALUE/2;
		}
		dis[1]=0;
		int[] check = new int[n+1];
		for(int i=1;i<=n;i++) {
			int minn =Integer.MAX_VALUE;
			int minx = 1;
			for(int j=1;j<=n;j++) {
				if(dis[j] <minn && check[j]==0) {
					minn = dis[j] ;
					minx= j;
				}
			}
			check[minx]= 1;
			for(int j=1;j<=n;j++ ) {
				if(grid[minx][j] >0) {
					if(dis[j] > minn + grid[minx][j])
						dis[j]=minn+grid[minx][j];
				}
			}
		   
		}
		System.out.println(dis[n]);
		
		
	}

}
