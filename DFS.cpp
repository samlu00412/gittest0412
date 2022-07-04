#include <bits/stdc++.h>
#define good ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pll pair<LL,LL>
#define pb push_back
using namespace std;

typedef long long LL;
int deepest,ans;
bool visited[100005] = {false};
int fa[100005]= {0},depth[100005] = {0};
vector<int> v[100005];
inline void dfs(int now,int d){
    visited[now] = true;
    depth[now] = d;
    for(auto x: v[now]){
        if(visited[x] == false){
            visited[x] = true;
            fa[x] = now, depth[x] = d+1;
            if(depth[deepest] < depth[x]){
                deepest = x;
                ans = depth[x];
            }
            dfs(x,d+1);
        }
    }
}
inline void clean(int x){
    for(int i = 0; i < x; i++){
            v[i].clear();
            fa[i] = depth[i] = 0;
            visited[i] = false;
        }
}
int main(){
    good;
    int n,i,a,b;
    while (cin >> n){
        deepest = ans = 0;
        for(i = 0; i < n-1; i++){
            cin >> a >> b;
            v[a].pb(b);
            v[b].pb(a);
        }
        dfs(0,1);
        for(i = 0; i < n; i++){
            visited[i] = false;
            depth[i] = 0;
        }
        dfs(deepest,0);
        cout << ans << endl;
        clean(n);
    }
    return 0;
}