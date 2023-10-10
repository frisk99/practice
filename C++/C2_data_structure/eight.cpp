#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<queue>
using namespace std;
int dfs(string str){
    string end ="12345678x";
    unordered_map<string ,int >d;
    queue<string> q;
    q.push(str);
    d[str] =0;
    int dx[4]={0,1,0,-1} ,dy[4]={1,0,-1,0};
    while(q.size()){
        auto t = q.front();
        q.pop();
        int distance = d[t];
        if(t == end) return distance;
        int k=t.find("x");
        int x= k/3,y=k%3;
        for(int i=0;i<4;i++){
        	int a=x+dx[i],b=y+dy[i];
        	swap(t[k],t[3*a+b]);
        	if(!d.count(t)){
        		d[t] = distance +1;
        		q.push(t);
			}
			swap(t[k],t[3*a+b]);
		}
        
    }
    return 0;
}
int main(){
    string str;
    for(int i=0;i<9;i++){
        char c;
        cin >> c;
        str += c;
    }
    dfs(str);
    return 0;
}
