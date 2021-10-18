#include<stdio.h>
#include<iostream>
using namespace std;
//程序运行后
//栈区（编译器管理）：存放函数的参数值，局部变量等
//注意：*****不要返回局部变量的地址*****，栈区开辟的数据由编译器自动释放

int* func()//形参也存放在栈区
{
	int a=10;//局部变量 放在栈区，栈区数据在函数执行完后自动释放
	return &a;
}
int main()
{
	int*p=func();
	cout << "a:"<<*p<< endl;
	cout << "a:"<<*p<< endl;
	system("pause");
	return 0;
}