
public class chengjieyueshu {
	public static void main(String args[]) {
		int n =101;
		long begin=System.currentTimeMillis();
		int [] arr =new int [n];
		for(int i =2;i<=100;i++) {
			int x = i;
			for(int j=2;j*j<=x;j++) {
				if(x%j==0) {//如何因式分解
					while(x%j==0) {
					x=x/j;
					arr[j]=arr[j]+1;
					}
					
				}
			}
	
			if(x>1) arr[x]=arr[x]+1;
		}
		long sum=1;
		for(int i=1;i<=100;i++) {
			if(arr[i]!=0) {
			sum=sum*(arr[i]+1);
			}
		}
		System.out.println(sum);
		long end=System.currentTimeMillis();
		System.out.println("程序运行的时间为："+(end-begin)+"ms");
	}

}
