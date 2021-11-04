#include <stdio.h>
#include <iostream>
using namespace std;
//区别
// struct 默认权限是public
// class 默认权限是private
struct Person1
{
	void func1()
	{
		cout << "func1" << endl;
	}
};

class Person2
{
	void func2()
	{
		cout << "func2" << endl;
	}
};

int main()
{
	Person1 p1;
	p1.func1();
	Person2 p2; //错误 ，访问权限默认是私有
	p2.func2();
	system("pause");
	return 0;
}