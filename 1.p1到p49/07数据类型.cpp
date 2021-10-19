#include<stdio.h>
#include<iostream>
using namespace std;
/*
1.数据类型意义：给变量分配合适内存空间，防止空间浪费
2.sizeog(short int)=2;int=4;long=4;long long =8;不超出范围的情况下输出情况没啥区别
*/
int main()
{
	short num1 = 32768;
	int num2 = 32768;
	long num3 = 10;
	long long num4 = 10;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	system("pause");
	return 0;
}