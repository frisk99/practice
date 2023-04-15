import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class spday {
    static int[] monthNums= {0,31,28,31,30,31,30,31,31,30,31,30,31,30};
    public static void main(String[] args) {
      int sum=0;
      for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
          if(i==j) continue;
          int[] nums=new int [] {i,i,i,i};
          int year =4,date=0,time=0;
          for(int k=0;k<4;k++) {
        	  nums[k]=j;
        	  int number = 0;
        	  for(int l=0;l<4;l++ ) {
        		  number+=nums[l];
        	  }
        	  date+=isdate(number);
        	  time+=istime(number);
        	  nums[k]=i;
          }
          sum+=year*date*time;
        }
      }
      System.out.println(sum);
 
    }
    public static int istime(int n) {
    	int hour = n/100;
    	int sec= n%100;
    	if(hour >24) return 0;
    	if(sec>60) return 0;
    	return 1;
    }
    public static int isdate(int n) {
      int month = n /100;
      int day = n%100;
      if(month>12 || month<1) return 0;
      if(day>monthNums[month] || day<1) return 0;
  	  return 1;
    }
}