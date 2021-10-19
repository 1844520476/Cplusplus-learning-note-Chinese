#include<stdio.h>
#include<iostream>
using namespace std;
//1.引用作用：给变量起别名
//语法：数据类型 &别名 = 原名

//2.应用的注意事项
//2.1应用必须初始化
//2.2应用在初始化后，不可改变
int main()
{
	int a=10;
    int &b=a;
    b=20;
    cout<<"a="<<a<< endl;
    cout<<"b="<<b<< endl;
	system("pause");
	return 0;
}