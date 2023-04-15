import java.util.Scanner;

import javax.imageio.ImageTranscoder;

import java.awt.Checkbox;
import java.awt.print.Printable;
// 1:无需package
// 2: 类名必须Main, 不可修改
import java.util.*;
public class fatMaze {

	public static char[][] chs=new char[305][305];
    public static boolean[][] visit= new boolean[301][301];
    static Queue<int[] > queue = new LinkedList<> ();
    static int[] dictx= new int[]{ 1, 0, -1, 0 };
    static int[] dicty= new int[]{0, 1, 0, -1};
    static int n,m;
    static int[] r =new int[] {2,1,0};
  
//   static class Node {
//            int x;
//            int y;
//            int t;
//
//            public Node(int x, int y, int t) {
//                this.x = x;
//                this.y = y;
//                this.t = t;
//            }
//        }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String strnum= scan.nextLine();
        String[] arr = strnum.split(" ");
        n = Integer.parseInt(arr[0]);
        m = Integer.parseInt(arr[1]);
        chs = new char[n][n];
        for (int i = 0; i < n; i++) {
            char[] tmpchars = scan.nextLine().toCharArray();
            chs[i]= tmpchars;
        }
        queue.add(new int[] {2,2,0});
        visit[2][2]=true;
        bfs();
    }
    private static void bfs() {
    	while(!queue.isEmpty()) {

          	 int[] now = queue.poll();
          	 int tmpx= now[0];
          	 int tmpy= now[1];
          	 int time =now[2];
          	 //System.out.println(time);
          	if(tmpx ==n-3 && tmpy == n-3 ) {
          	 System.out.println(time); //time + 1 ;
          	 }
          	 if(time<=2*m) {
            queue.add(new int[] {tmpx,tmpy,time+1});
          	 }
          	 for(int i=0;i<4;i++) {
          		 int x = tmpx+dictx[i];
          		 int y = tmpy+dicty[i];
          		 int fat =(time / m) > 2 ? 0 : r[time / m];
          		 if (x - fat < 0 || x + fat >= n || y - fat < 0 || y + fat >= n || visit[x][y])continue;
          		 boolean ok = true; // 是否能走到
                for (int j = x - fat; j <= x + fat; j++) {
                   for (int k = y -fat; k <= y +fat; k++) {
                       if (chs[j][k] == '*') {
                           ok = false;
                           break;
                       }
                   }
               }
                if(ok) {
               	visit[x][y]=true;
               	queue.add(new int[] {x,y,time+1});
               }
          	 }
            
           
    	}
    }
}
