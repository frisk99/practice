import java.util.Arrays;
import java.util.Scanner;
// 1:����package
// 2: ��������Main, �����޸�

public class dengchashulie {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        //�ڴ��������Ĵ���...
        int n = scan.nextInt();
        int [] arr =new int[n];
        for(int i =0;i<n;i++) {
        	arr[i]=scan.nextInt();
        	Math.pow(1,2);
        }//??
        Arrays.sort(arr);
        int ans =arr[1]-arr[0];
        
        for(int i=2;i<n;i++) {
        	ans = gcd(ans,arr[i]-arr[i-1]);
        }
        if(arr[n-1] == arr[0]) System.out.println(n);
        int res = (arr[n-1]-arr[0]) / ans +1;
        System.out.println(res);
        scan.close();
    }
    public static int gcd(int x,int y) {
    	return y==0 ? x: gcd(y,x%y);
    	
    }
}