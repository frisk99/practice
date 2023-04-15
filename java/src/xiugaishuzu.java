import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class xiugaishuzu {
	static  int[] parent = new int[1000000];
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
       
        for(int i =0; i< parent.length;i++) {
        	parent[i]=i;
        }
        int n = scan.nextInt();
        //在此输入您的代码...
        int[] arr =new int[n];
        for(int i=0;i<n;i++) {
        	arr[i]=scan.nextInt();
        }
        for(int i=0;i<n;i++) {
        	int arriHead = getHead(arr[i]);
        	arr[i]=arriHead;
        	parent[arriHead]=arr[i]+1;
        }
        for(int i=0;i<n;i++) {
        	System.out.println(arr[i]);
        }
        scan.close();
    }
    public static int getHead(int x) {
    	while(x!=parent[x]) {
    		x=parent[x];
    	}return x;
    }
    
}