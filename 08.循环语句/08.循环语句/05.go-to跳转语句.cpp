#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/* 1.goto����ʹ��.
*  goto������Ƕ��ʽ��������������ʹ��.
*/
int main0501(int argc,char *argv[]){

happy:
	cout << "���ǽ���!" << endl;
	system("pause");
	return 0;

	string str;

	for (int i = 0; i < 10; i++) {
		cout << "��" << i + 1 << "������" << endl;
		cout << "���з�?" << endl;
		cin >> str;
		if (str != "��") {
			continue;
		}
		cout << "�Ӹ�΢�Ű�!" << endl;

		cout << "��������,����������?" << endl;
		cin >> str;
		if (str == "yes") {
			goto happy;//����gotoʵ����ת.
		}
	}

	system("pause");
	return 0;
}

/* 2.����ʵ��������к���ʹ��goto.
*  ����ʹ�ú���������bool������һ����־���ʹ��goto.
*/
int main0502(int argc, char* argv[]) {

	string str;
	bool flag = false;
	
	for (int i = 0; i < 10; i++) {
		cout << "��" << i + 1 << "������" << endl;
		cout << "���з�?" << endl;
		cin >> str;
		if (str != "��") {
			continue;
		}
		cout << "�Ӹ�΢�Ű�!" << endl;

		cout << "��������,����������?" << endl;
		cin >> str;
		if (str == "yes") {
			flag = true;
			break;
		}
	}
	if (flag) {
		cout << "���ǽ���!" << endl;
	}
	system("pause");
	return 0;
}