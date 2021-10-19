#include<stdio.h>
#include<iostream>
using namespace std;
/*
6.4ֵ����ʱ���βθı䣬��Ӱ��ʵ��
*/
void swap(int num1,int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a="<<a << endl;
	cout << "b=" << b<< endl;
	system("pause");
	return 0;
}