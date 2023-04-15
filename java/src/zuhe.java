
public class zuhe {
	public static void mian(String args[]) {
		
	}

	long zuhe(int m, int n) {
		long sum1=1;
		for (int i = 1; i <= m; i++) {
			sum1 = sum1 * i;
		}
		long sum2 = 1;
		for(int j =n; j>=n-m+1; j--){
			sum2 =sum2 * j;
		}

		return sum2 / sum1;
	}

}
