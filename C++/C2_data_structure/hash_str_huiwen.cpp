#include<iostream>
#include<string.h>
const int N = 2000000+10,P  = 131;
typedef unsigned long long ULL;
using namespace std;
char str[N];
ULL hl[N], hr[N], p[N];
ULL get(ULL h[],int l,int r){
	return h[r]-h[l-1]*p[r-l+1];
}
int main(){
	p[0]=1;
	int cnt = 0;
    for(int i =1;i<N;i++) p[i]=p[i-1]*P;
    while(scanf("%s",str+1),strcmp(str+1,"END")){
    	cnt++;
        int n =  strlen(str+1);
        for(int i =n*2;i>0;i=i-2){
        	str[i]=str[i/2];
        	str[i-1] = '#';
		}
		n=n*2;
        for(int i=1 ,j=n;i<=n;i++,j--){
        	hl[i]=hl[i-1]*P +str[i]-'a'+1;
        	hr[i]=hr[i-1]*P +str[j]-'a'+1;
		}
		int res =0;
		for(int i =1;i<=n;i++){
			int l =0,r=min(i-1,n-i);
			int mid;
			while(l < r){
				mid = (l+r+1)>>1;
				if( get(hl,i-mid,i-1) != get(hr,n-(i+mid)+1,n-(i+1)+1) ) r = mid-1; //╩ьнд
				else l=mid;
				if(str[i-l] == '#' )res = max(res,l); 
				else  res = max(res,l+1); 
			}
		}
			printf("Case %d: %d\n",cnt,res);
		
    }
    return 0;
}
