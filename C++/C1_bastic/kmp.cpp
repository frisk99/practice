#include<iostream>
using namespace std;
const int M = 1e6+10;
const int N = 1e5+10;
char p[N], s[M];
int ne[N];
int main(){
	int m,n;
	cin>>n >> p+1>> m>> s+1;
	//next数组如何做到 
	for(int i =2 ,j=0;i<=n;i++){
		while(j&&p[i]!=p[j+1]) j=ne[j];
		if(p[i]==p[j+1]) j++;
		ne[i]=j;
	}
	for(int i=1,j=0;i<=m;i++){
		while(j&&s[i] !=p[j+1]) j = ne[j];
		if(s[i]==p[j+1]) j++;
		if(j==n) {
			cout<<i-n<<" ";
			j=ne[j];
		}
	}
	return 0;
}
