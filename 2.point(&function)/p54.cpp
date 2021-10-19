#include<stdio.h>
#include<iostream>
using namespace std;
//函数声明
//提前告诉编译器函数存在
int max(int a,int b);//记得分号
int max(int a,int b);//声明可写多次，定义只能有一次
int main()
{
	int a=30;
	int b=20;
		cout << max(a,b) << endl;
	    system("pause");
	    return 0;
}
int max(int a,int b)//函数定义
{
	return a>b?a:b;
}