import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class sanjiao {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = Integer.parseInt(scan.nextLine());
        int[][] a= new int [n+1][n+1];
        for(int i=1;i<=n;i++) {
        	String [] chs = scan.nextLine().split(" ");
        	for(int j=1;j<=chs.length;j++) {
        		a[i][j]=Integer.parseInt(chs[j-1]);
        		
        	}
        }
        int[][] dp = new int [n+1][n+1];
        for(int i=0;i<=n;i++) {
        	for(int j=0;j<=n;j++) {
        		dp[i][j]=-1;
        	}
        }
        dp[1][1]=a[1][1];
        for(int i=2;i<=n;i++) {
        	for(int j=1;j<=n;j++) {
        		dp[i][j]=Math.max(dp[i-1][j-1], dp[i-1][j])+a[i][j];
        		
        	}
        }
        if(n%2 ==1) {
        		System.out.println(dp[n][(n+1)/2]);
        
        }else {
        	int res = Math.max(dp[n][n/2], dp[n][n/2+1]);
        	System.out.println(res);
        }
        //在此输入您的代码...
        
    }
}