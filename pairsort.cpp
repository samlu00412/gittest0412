#include <bits/stdc++.h>
#define good ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pii pair<int,int>
using namespace std;
 
inline bool cmp(pii a, pii b){
    return a.first * a.second < b.first * b.second;
}

int main(){
    good;
    int i,n;
    cin >> n;
    pii p[n];
    for(i = 0; i < n; ++i)
        cin >> p[i].first;
    for(i = 0; i < n; ++i)
        cin >> p[i].second;
    sort(p,p+n,cmp);
    cout << p[0].first << ' ' << p[0].second;
    return 0;
}