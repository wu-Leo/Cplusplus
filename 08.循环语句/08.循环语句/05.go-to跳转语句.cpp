#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/* 1.goto语句的使用.
*  goto常常在嵌入式和物联网开发中使用.
*/
int main0501(int argc,char *argv[]){

happy:
	cout << "我们结婚吧!" << endl;
	system("pause");
	return 0;

	string str;

	for (int i = 0; i < 10; i++) {
		cout << "第" << i + 1 << "次相亲" << endl;
		cout << "你有房?" << endl;
		cin >> str;
		if (str != "有") {
			continue;
		}
		cout << "加个微信吧!" << endl;

		cout << "我中意你,你中意我吗?" << endl;
		cin >> str;
		if (str == "yes") {
			goto happy;//利用goto实现跳转.
		}
	}

	system("pause");
	return 0;
}

/* 2.在现实软件开发中很少使用goto.
*  常常使用函数或利用bool来定义一个标志替代使用goto.
*/
int main0502(int argc, char* argv[]) {

	string str;
	bool flag = false;
	
	for (int i = 0; i < 10; i++) {
		cout << "第" << i + 1 << "次相亲" << endl;
		cout << "你有房?" << endl;
		cin >> str;
		if (str != "有") {
			continue;
		}
		cout << "加个微信吧!" << endl;

		cout << "我中意你,你中意我吗?" << endl;
		cin >> str;
		if (str == "yes") {
			flag = true;
			break;
		}
	}
	if (flag) {
		cout << "我们结婚吧!" << endl;
	}
	system("pause");
	return 0;
}