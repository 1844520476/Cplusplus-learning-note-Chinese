#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
//1.无参数无返回值
void test01()
{
	cout << "this is test01" << endl;
}
//2.有参数无返回值
void test02(int a)
{
	cout << "this is test 02\na_2=" << a<< endl;
}
//3.无参数有返回值
int test03()
{
	cout << "this is test 03"  << endl;
	return 100;
}
//4.有参数有返回值
int test04(int a)
{
	a = a ^ 2;
	return a;
}
int main()
{
	test01();

	int a_2 = 10;
	test02(a_2);
	
	int a_3 = test03();
	
	int a_4 = 1000;
	a_4=test04(a_4);
	cout << "this is test 04\na_4=" << a_4 << endl;
	system("pause");
	return 0;
}