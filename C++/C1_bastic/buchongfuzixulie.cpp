#include<iostream>
using namespace std;
const int N =1e5+10;
int a[N],s[N];

int main(){
	int n;
	cin >> n;
	int res =-1;
	for(int i =0 ; i<n;i++) cin>>a[i];
	for(int i=0,j=0;i<n;i++){
		//最长不重复子序列 
		s[a[i]]++;
		while(s[a[i]] >1){
			s[a[j++]]--;
		}
		res = max(res , i-j+1);
	}
	cout<<res<<endl;
	return 0;
}
