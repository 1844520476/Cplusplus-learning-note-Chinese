#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//代码区：01机器代码。特点：共享、只读
//全局区：全局变量、静态变量(static关键字)、常量（中的字符串常量和constant修饰的全局变量）

//全局变量
int g_a=10;
int g_b=10;
//const修饰的全局变量
const int c_g_a=10;
const int c_g_b=10;
int main()
{
	//创建普通局部变量
	int a=10;
	int b=10;
	cout<<"location of a:"<<&a<<endl;
	cout<<"location of b:"<<&b<<endl;

	cout<<"location of g_a:"<<&g_a<<endl;
	cout<<"location of g_b:"<<&g_b<<endl;

	//静态变量
	static int s_a=10;
	static int s_b=10;
	cout<<"location of s_a:"<<&s_a<<endl;
	cout<<"location of s_b:"<<&s_b<<endl;

    //常量
	//字符串常量
	string str_a="Hello";
	string str_b="World";
	cout<<"location of str_a:"<<&str_a<<endl;
	cout<<"location of str_b:"<<&str_b<<endl;
	//constant修饰变量
    //const修饰的全局变量，const修饰的局部变量
    cout<<"location of c_g_a:"<<&c_g_a<<endl;
	cout<<"location of c_g_b:"<<&c_g_b<<endl;

	const int c_l_a=10;
    const int c_l_b=10;

    cout<<"location of c_l_a:"<<&c_g_a<<endl;
	cout<<"location of c_l_b:"<<&c_g_b<<endl;
	system("pause");
	return 0;
}