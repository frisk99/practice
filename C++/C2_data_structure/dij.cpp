#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
const int N =510;
int dist[N];
int h[N],e[N],ne[N],w[N],idx;
int n,m;
typedef pair<int,int> PII;
bool st[N];
void add(int a,int b ,int c){
    e[idx]=b;
    ne[idx]=h[a];
    w[idx]=c;
    h[a]=idx++;
    return;
}
int dij(){
    memset(dist,0x3f,sizeof dist);
    priority_queue<PII,vector<PII>,greater<PII>> heap;
    dist[1]=0;
    heap.push({0,1});
    while(heap.size()){
        auto t = heap.top();
        heap.pop();
        int ver = t.second , distance = t.first;
        if( !st[ver]){
            st[ver]=true;
            for(int i = h[ver];i!=-1;i=ne[i]){
                int j=e[i];
                if(dist[j] > distance + w[i]){
                    dist[j] = distance + w[i];
                    heap.push({dist[j],j});
                }
            }
        }
    }

    if(dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}

int main(){
    cin>>n>>m;
    memset(h,-1,sizeof h);
    
    while(m --){
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
    }
    int res = dij();
    cout<<res<<endl;
    return 0;
}
