#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/* 1. while ѭ����� */
int main0101(int argc,char *argv[]){

	int i = 1;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}	
	cout <<"sum="<< sum << endl;
	system("pause");
	return 0;
}