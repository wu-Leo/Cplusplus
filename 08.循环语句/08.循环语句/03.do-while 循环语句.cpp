#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main0301(int argc,char *argv[]){

	//1+2+3+++.....100.
	int sum = 0;
	int i = 1;
	do {
		sum += i;
		i++;
	} while (i <= 100);
	cout << "sum=" << sum << endl;

	system("pause");
	return 0;
}