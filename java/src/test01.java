import java.util.Scanner;
// 1:����package
// 2: ��������Main, �����޸�

public class test01 {
    public static void main(String[] args) {
       // Scanner scan = new Scanner(System.in);
        //�ڴ��������Ĵ���...
        int [] nums = new int[10];
        for(int i=0;i<nums.length;i++){
          nums[i]=2021;
        }
        int flag =0,count=0,i=1,tmp=i,idx=0;
        while(flag!= 1){
          tmp=i;
          while(tmp>0){
            idx=tmp %10;
            nums[idx]=nums[idx]-1;
            if(nums[idx] <0){
              flag =1;
              System.out.println(i);
              break;
            }
            tmp=tmp/10;
          }
          i++;
          
        }
      
     //   scan.close();
    }
}