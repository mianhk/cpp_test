#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int>& itos,vector<int>& ifroms,int from,int cur,vector<bool>& visited,vector<list<int>>& g){
    if(visited[cur])
        return;
    itos[from]++;
    ifroms[cur]++;
    visited[cur]=true;
    list<int> l=g[cur];
    for(auto ll:l)
        dfs(itos,ifroms,from,ll,visited,g);
}

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int res = 0;
    vector<list<int>> g(n+1);
    for(int i=1;i<=n;++i){
        list<int> l;
        g[i]=l;
    }
    for(int i=0;i<m;++i){
        int from,to;
        cin>>from>>to;
        g[from].push_back(to);
    }
    
    vector<int> itos(n+1,0),ifroms(n+1,0);
    for(int i=1;i<=n;++i){
        vector<bool> visited(n+1);
        dfs(itos,ifroms,i,i,visited,g);
    }
    
 
    for(int i=1;i<=n;++i)
        if(ifroms[i]>itos[i])
            res++;
    cout<<res<<endl;
 system("pause");
 return 0;

}