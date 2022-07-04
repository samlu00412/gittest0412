#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//讀取註冊表
    int reg[726]={0};
    ifstream list;
    list.open("register.txt",ios::in);
    if (!list.is_open())
    	cout << "檔案開啟失敗\n";

    for (int i = 0; i < 726; i++)
    	list >> reg[i];//讀取註冊表

    list.close();//關閉註冊紀錄檔案流

    //更新註冊表
	ofstream newreg;
	newreg.open("register.txt",ios::out);
	if (!newreg.is_open())
		cout << "檔案開啟失敗\n";
	
	for (int k = 0; k < 726; k++){
		if (reg[k] == 0)
			cin >> reg[k];//從空位開始註冊
	}

	for (int i = 0;i < 726; i++)
		newreg << reg[i] << endl;//覆蓋舊註冊表
	
	for (int i = 0; i < 726; i++){ //檢查重複
		if (reg[i] != 0){
			for(int x = i+1; x < 726; x++){
				if (reg[x] != 0 && reg[i] == reg[x]){
						cout << reg[i] << "已經被註冊過了\n";
						reg[x] = 0;
					}
				}
			}
		}
	
	system("pause");
	newreg.close(); //關閉新註冊紀錄檔案流
    return 0;
}
