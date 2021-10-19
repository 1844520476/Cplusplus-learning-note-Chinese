#include<stdio.h>
#include<iostream>
using namespace std;
/*
ǰ/���õ����ݼ�
ǰ��������ȶԱ�����1���ٰѼ�1��ı����������ʽ����;�����෴
*/
int main() 
{
	/*
	//1.ǰ�õ���
	int a = 10;
	++a;
	cout << "a="<<a << endl;
	//2.���õ���
	int b = 10;
	b++;
	cout << "b=" << b << endl;
	*/
	//3.����
	int a1 = 10, a2 = 20;
	int a3 = a1;
	int sum1 = ++a1 * a2;
	int sum2 = a3++ * a2;
	cout << "a1=" << a1 << endl;
	cout << "sum1=" << sum1 << endl;
	cout << "sum2=" << sum2 << endl;
	system("pause");
	return 0;
}