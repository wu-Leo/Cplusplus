#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/* 1. Ñ­»·Ç¶Ì×. */
int main0601(int argc,char *argv[]){

	int count = 0;
	for (int i = 0; i < 24; i++) {
		for (int j = 0; i < 60; j++) {
			for (int k = 0; i < 60; k++) {
				count++;
				cout << i << ":" << j << ":" << k << "µÚ" << count << "´ÎÏëÄã" << endl;
				Sleep(1000);//wÐÝÃß1Ãë.
			}
		}
	}
	system("pause");
	return 0;
}