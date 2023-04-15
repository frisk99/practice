import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class floyd {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long [][] dist = new long[2022][2022];
        for(int i=1;i<=2021;i++) {
        	for(int j=1;j<=2021;j++) {
        		dist[i][j]=Integer.MAX_VALUE-500;
        		if(Math.abs(i-j)<=21) {
        			dist[i][j]=lcm(i,j);
        		}
        		if(i==j) {
        			dist[i][j]=0;
        		}
        	}
        }
        for(int k=1;k<=2021;k++) {
        	for(int i=1;i<=2021;i++) {
        		for(int j=1;j<=2021;j++) {
        			dist[i][j]=Math.min(dist[i][j],dist[i][k]+dist[k][j] );
        		}
        	}
        }
        System.out.println(dist[1][2021]);
        //在此输入您的代码...
    }
    public static int gcd(int a ,int b) {
    	return b==0? a : gcd(b,a%b);
    }
    public static int lcm(int a,int b) {
    	return a*b/gcd(a,b);
    }
}