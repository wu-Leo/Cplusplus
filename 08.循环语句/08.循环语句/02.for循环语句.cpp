#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/* 1. for 循环语句 */
int main0201(int argc,char *argv[]){
	
	//后羿射日.
	for (int i = 0; i <10; i++) {
		cout << "射第" << i+1 << "个太阳" << endl;
	}

	//int i = 0;
	//for (;;) {//相当于while(1)
	//	cout << "射第" << i + 1 << "个太阳" << endl;
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