#include<stdio.h>
#include<iostream>
using namespace std;
//����sizeof�����������ռ�ڴ��С
/*�﷨:sizeof(��������/����)*/
int main()
{
	int num1 = 10;
	cout << "	sizeof(int)=" << sizeof(int)<< endl;//��������
	short num2 = 10;
	cout << "	sizeof(short)=" << sizeof(num2) << endl;//����
	long long num3 = 10;
	cout << "	sizeof(long long)=" << sizeof(num3) << endl;//����
	system("pause");
	return 0;
}//short<int<=long<long long