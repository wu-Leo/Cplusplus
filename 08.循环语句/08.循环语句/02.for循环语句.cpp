#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/* 1. for ѭ����� */
int main0201(int argc,char *argv[]){
	
	//��������.
	for (int i = 0; i <10; i++) {
		cout << "���" << i+1 << "��̫��" << endl;
	}

	//int i = 0;
	//for (;;) {//�൱��while(1)
	//	cout << "���" << i + 1 << "��̫��" << endl;
	//	i++;
	//	if (i >= 10) {
	//		break;
	//	}
	//}
	system("pause");
	return 0;
}

int main0202(int argc, char* agrv[]) {

	//1+2+3+.....100.
	int sum = 0;
	
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	cout << "sum=" << sum << endl;

	system("pause");
	return 0;
}