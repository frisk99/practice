
public class countBalls {
	public int countBalls(int lowLimit, int highLimit) {
		int [] arr =new int [46] ;
		for(int i = lowLimit;i<highLimit+1;i++) {
			  arr[getvalue(i)]++;
		}
		int max=-1;
		for(int a : arr) {
			if(a>max)
				max=a;
		}
		
		return max;
    }
	public static int getvalue(int num) {
		int sum=0;
		while(num>0) {
		   sum+=num%10;
		   num/=10;
		   
		}
		return sum;
		
	}

}


