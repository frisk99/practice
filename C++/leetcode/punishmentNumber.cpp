#include<iostream>
using namespace std;
#include<math.h>
#include<vector> 
//wrong! 问题是这样存储不了0 而pos 只能记录当前的位置 dfs应该再用一个 
vector<int> vi;
    int flag=0;
    int getNumDigits(int num) {
    int numDigits = 0;
    if(num == 0) return 0;
    
    while (num > 0) {
        num /= 10;
        numDigits++;
    }
    
    return numDigits;
}
//1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,657,675,703,756,792,909,918,945,964,990,991,999,1000

//893025
    void work(int n, int idx,int m,int res){

        if(res > m)return;
        if(res+n == m ){
            flag = 1;
            return;
        }
        if(n == 0){
            if(res==m){
                flag =1;
                return;
            }
            return;
        }
        if(m < 0) return ;
        int r = n %10;
        int  l = getNumDigits(res);
        if(r==0){
        	idx++;
		}
		if(r==0) {
		work(n/10,idx,m,  r*pow(10,l+idx)+ res );
		}
		work(n/10,0,m -res, r );
        work(n/10,0,m,  r*pow(10,l+idx)+ res);
        
    }
    int punishmentNumber(int n) {
        int cnt =0;
        for(int i =1;i<=n;i++){
            flag =0;
            work(i*i,0,i,0);
            if(flag==1 ){
				vi.push_back(i);           
			    cnt+= i*i;
            }
        }
        return cnt;
    }
int main(){
	int n;
	cin>>n;
	cout<< punishmentNumber(n)<<endl;
	for(auto v: vi){
		cout<<v<<",";
	}
	return 0;
}
