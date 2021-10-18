#include<stdio.h>
#include<iostream>
using namespace std;
//结构体指针
//通过指针访问结构体中的成员（利用->可通过结构体指针访问结构体属性）
struct Student//此时不能省略
{
	//成员列表
	string name;//姓名
	int age;//年龄
	int score;//分数
};
	int main()
{
	//1.创建学生结构体变量
	struct Student s={"Jack",19,99};
	//2.通过指针指向结构体变量
	//int*p=&s;//error
	struct Student*p=&s;
	//3.通过指针访问结构体变量中的数据
	cout<<"name:"<<p->name
	<<"  age:"<<p->age
	<<"  score:"<<p->score<<endl;//使用->访问
	system("pause");
	return 0;
}