class Solution {
public:
    int findNthDigit(int n) {
         long long i = 1, s = 9, base = 1;//i��ʾ�Ǽ�λ����s��ʾλ�����ж��ٸ���base��ʾλ������ʼֵ��
         while(n > i * s) {   // 9, 90, 900, 9000, 90000, i * s��ʾλ���ܹ�ռ����λ��
             n -= i * s;         // 1000 - 9 - 90 * 2 - 900 * 3 ,��i= 3 ʱ������������˵��������λ�����档
             i ++;                
             s *= 10;
             base *= 10;
         }
         int number = base + (n + i - 1) / i - 1; //��λ���ĵڼ������� 1000 - 9 - 180 = n , n / 3 + base - 1������0�ʼ�1��, ����ȡ�� n + i - 1��
         int r = n % i ? n % i : i;              // ���������ǵڼ�λ���������˾������һλ��
         for (int j = 0; j < i - r; j ++) number /= 10; //�����ĵ�i - rλ��ȡ����i - rλ��

         return number % 10;
    }
};
