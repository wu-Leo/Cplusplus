#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
*  break: ��������ѭ��.
*  continue:��������ѭ��,�����´�ѭ��.
*/
int main0401(int argc,char *argv[]){

	string str;

	for (int i = 0; i < 10; i++) {
		cout << "��" << i + 1 << "������" << endl;
		cout << "���з�?" << endl;
		cin >> str;
		if (str != "��") {
			continue;
		}
		cout << "�Ӹ�΢�Ű�!" << endl;
	}
	system("pause");
	return 0;
}