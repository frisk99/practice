
public class find_Image_number {
	public int nthMagicalNumber(int n, int a, int b) {
		long left =0;
		long right = Math.min(a, b) / gcd(a,b)*n;
		int lcm = a/gcd(a,b)*b;
		while(left+1<right) {
			long mid = left + (right - left)/2 ;
			if(mid/a + mid/b - mid/lcm >= n ) {
				right = mid;
			}else {
				left = mid;
			}
		}
		long MOD = (long) 1e9 + 7;
		return (int)(right % MOD);
    }

	private int gcd(int a, int b ) {
		return b == 0 ? a : gcd(b, a % b);
	}
}
