#include<iostream>
#include<algorithm>
using namespace std;
const int N =1e5+10;
int a[N];
int s=0;
void down(int u){
    int t =u;
    if(2*u <=s && a[2*u] < a[t]) t=2*u;
    if(2*u+1 <=s && a[2*u+1] <a[t]) t=2*u+1;
    if(u!=t){
        swap(a[t],a[u]);
        down(t);
    }
    return ;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    s =n;
    for(int i=n/2;i>=0;i--) down(i); //从大到小-- 
    while(m--){
        printf("%d ",a[1]);
        a[1]=a[s];
        s--;
        down(1);
    }
    return 0;
}
