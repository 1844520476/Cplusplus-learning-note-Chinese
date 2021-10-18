#include<stdio.h>
#include<iostream>
using namespace std;
//指针所占内存空间
	int main()
{
	int a=100;
	int*p=&a;//把a的地址给指针p	
	cout << "p=" <<p<< endl;
	cout << "a=" <<a<< endl;
	cout << "*p=" <<*p<< endl;//解引用(显示指针指向地址存储的数据))
	//内存空间
    cout<<"size of(int*)="<<sizeof(int*)<<endl;
	cout<<"size of(float*)="<<sizeof(float*)<<endl;//p就是int*型数据类型
	cout<<"size of(double*)="<<sizeof(double*)<<endl;
	cout<<"size of(char*)="<<sizeof(char*)<<endl;
	cout<<"size of(short*)="<<sizeof(short*)<<endl;//主要是指针数据类型都是8字节
	system("pause");
	return 0;
}//经过验证为64位（8字节）电脑