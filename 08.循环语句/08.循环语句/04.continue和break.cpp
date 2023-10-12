#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
*  break: 结束本层循环.
*  continue:结束本次循环,进入下次循环.
*/
int main0401(int argc,char *argv[]){

	string str;

	for (int i = 0; i < 10; i++) {
		cout << "第" << i + 1 << "次相亲" << endl;
		cout << "你有房?" << endl;
		cin >> str;
		if (str != "有") {
			continue;
		}
		cout << "加个微信吧!" << endl;
	}
	system("pause");
	return 0;
}