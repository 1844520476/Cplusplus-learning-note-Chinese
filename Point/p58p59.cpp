#include<stdio.h>
#include<iostream>
using namespace std;
//空指针：指向内存中编号为0的空间（不可访问，0~255被系统占用，会报错）

//野指针：指针变量指向非法内存空间
	int main()
{
	int*p=NULL;	
//1.空指针用于给指针变量初始化
//2.空指针是不可以进行访问的
    cout << "*p" <<*p<< endl;
	int*n=(int*)0x1100;//指向非法内存空间
	cout<<'*n'<<*n<<endl;//无法操作未许可内存
	system("pause");
	return 0;
}