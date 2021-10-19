#include<stdio.h>
#include<iostream>
using namespace std;
/*
a=2��b=++aǰ�õ���b=3
      ��b=a++���õ���b=2
*/
int main()
{
	int a1 = 3, b1 = 10;
	cout << b1/a1 << endl;//���������Ĭ�����������ֱ������С�����֣�
	cout << (double)b1 / a1 << endl;
	system("pause");
	return 0;
}