#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//Ū�����U��
    int reg[726]={0};
    ifstream list;
    list.open("register.txt",ios::in);
    if (!list.is_open())
    	cout << "�ɮ׶}�ҥ���\n";

    for (int i = 0; i < 726; i++)
    	list >> reg[i];//Ū�����U��

    list.close();//�������U�����ɮ׬y

    //��s���U��
	ofstream newreg;
	newreg.open("register.txt",ios::out);
	if (!newreg.is_open())
		cout << "�ɮ׶}�ҥ���\n";
	
	for (int k = 0; k < 726; k++){
		if (reg[k] == 0)
			cin >> reg[k];//�q�Ŧ�}�l���U
	}

	for (int i = 0;i < 726; i++)
		newreg << reg[i] << endl;//�л\�µ��U��
	
	for (int i = 0; i < 726; i++){ //�ˬd����
		if (reg[i] != 0){
			for(int x = i+1; x < 726; x++){
				if (reg[x] != 0 && reg[i] == reg[x]){
						cout << reg[i] << "�w�g�Q���U�L�F\n";
						reg[x] = 0;
					}
				}
			}
		}
	
	system("pause");
	newreg.close(); //�����s���U�����ɮ׬y
    return 0;
}
