#include<stdio.h>
#include<iostream>
using namespace std;
/*
可通过指针来保存一个地址
*/
	int main()
{
	//1.定义指针
    int a=10;
    int*p;//1.1指针定义的语法：数据类型*指针变量名
    p=&a; //1.2让指针纪录变量a的地址
    cout<<"the location of a:"<<&a<<endl;//&a   地址
    cout<<"the point p is:"<<p<<endl;//p
    //2.使用指针
    //可通过解引用（指针前加*）的方式来找到指针指向的内存
    *p=1000;//读和写操作
    cout<<"p="<<p<<endl;
    cout<<"a="<<a<<endl;//a   内存变量
    cout<<"*p="<<*p<<endl;//*p
	system("pause");
	return 0;
}