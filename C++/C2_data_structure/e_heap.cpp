#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int N =1e5+10;
int a[N],ph[N],hp[N];
int s=0;
void swap_a(int b,int c){
    swap(ph[hp[b]],ph[hp[c]]);
    swap(hp[b],hp[c]);
    swap(a[b],a[c]);
    
}
void down(int u){
    int t =u;
    if(2*u <=s && a[2*u] < a[t]) t=2*u;
    if(2*u+1 <=s && a[2*u+1] <a[t]) t=2*u+1;
    if(u!=t){
        swap_a(t,u);
        down(t);
    }
    return ;
}
void up(int u ){
    while(u/2&&a[u/2] > a[u]){
        swap_a(u/2,u);
        u/=2;
    }
}
int main(){
    int n,m=0;
    cin>>n;
    s =0;
    string str;
    int k,x;
    while(n--){
    cin >> str;
    if(str =="I"){
        cin>>x;
        s++;
        m++;
        ph[m]=s,hp[s]=m;
        a[s]=x;
        up(s);
    }
    if(str =="D"){
        cin >> x;
        k=ph[x];
        swap_a(k,s);
        s--;
        down(k),up(k);
    }
    if(str =="PM"){
        cout<<a[1]<<endl;
    }
    if (str =="DM"){
        swap_a(1,s);
        s--;
        down(1);
    }
    if(str=="C"){
        cin >>k >>x;
        k= ph[k]; //获得其在堆当中的下标
        a[k] = x;
        up(k),down(k);
    }
    }
    return 0;
}
