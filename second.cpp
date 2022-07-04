#include <bits/stdc++.h>
#define good ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main(){
	good;
	vector<string> v;
	int n,i = 0,k,j = 0;
	v.resize(100);
    cout << "歡迎使用單字練習系統，輸入1增加資料庫單字量，輸入2開始練習，輸入0結束程式" << endl;
    cin >> k;
    switch(k){
        case 0:
            break;
        case 1:
            cout << "請輸入要增加的單字數量" << endl;
            cin >> n;
            v.resize(v.size()+n);
    }
	return 0;
}
