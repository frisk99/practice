#include<iostream>
using namespace std;
int n,m;
const int N = 100010;
int a[N],s[N];
int main(){
	cin>>n>>m;
	for(int i =1;i<=n;i++){
		cin>>a[i];
		s[i]=a[i]-a[i-1];
	}
	int l,r,c;
	while(m--){
		cin>>l>>r>>c;
		s[l]+=c;
		s[r+1]-=c;
	}
	for(int i=1;i<=n;i++){
		s[i]+=s[i-1];
		cout<<s[i]<<" ";
	}
	return 0;
}
