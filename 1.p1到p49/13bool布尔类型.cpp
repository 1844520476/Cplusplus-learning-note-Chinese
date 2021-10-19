#include<stdio.h>
#include<iostream>
using namespace std;
/*
�������ͣ�true---�棨1��
                false--�٣�0��
1.����bool�������ͣ�bool flag=ture;
*/
int main()
{
	//1.����bool�������ͣ�
	bool flag = true;
	cout << flag << endl;
	bool flag2 = false;
	cout << flag2 << endl;
	//2.bool����ռ�ڴ�ռ�
	cout << "sizeof(bool)=" << sizeof(bool) << endl;
	system("pause");
	return 0;
}