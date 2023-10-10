#include<iostream>
using namespace std;
const int P =131;
typedef unsigned long long ULL;
ULL p[N],s[N];
char str[N];
ULL get_value(int l ,int r){
	return s[r] - s[l-1] * p[r-l+1];
}
int main(){
	int m ,n;
	cin >>n>>m;
	scanf("%s",str+1);
	p[0]=1;
	for(int i =1;i<=n;i++){
	p[i]=p[i-1]*P;
	s[i]= (str[i] -'a')* p[i] + s[i-1];
	}
	int l1,r1,l2,r2;
	while(m--){
		scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
		if(get_value(l1,r1) == get_value(l2,r2)) puts("Yes");
		else puts("No");
		
	}
	return 0;
}
