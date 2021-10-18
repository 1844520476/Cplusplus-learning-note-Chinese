#include<stdio.h>
#include<iostream>
using namespace std;
/*
结构体：自定义数据类型
语法：struct 结构体名{结构体成员列表};
通过结构体创建变量的方法有三种:
1 struct Student s1
2 struct Student s2={...}
3在定义结构体时随便创建结构体变量
*/
//1.创建学生数据类型：学生包括（姓名。年龄，分数）
//类型集合组成的类型
//语法 struct 类型名称{成员列表}
struct Student//此时不能省略
{
	//成员列表
	string name;//姓名
	int age;//年龄
	int score;//分数
}s3;//2.3中方法
//通过学生类型创建具体学生
	int main()
{
	//2.1 struct Student s1
	struct Student s1;//创建变量时struct可以省略
	s1.name="Jack";
	s1.age=20;
	s1.score=90;//给s1属性赋值，通过.访问结构体中属性
	cout<<"name:"<<s1.name<<"   age:"<<s1.age<<"   score="<<s1.score<<endl;
    //2.2 struct Student s2={...}
    struct Student s2={"John",21,91};//创建变量时struct可以省略
	cout<<"name:"<<s2.name<<"   age:"<<s2.age<<"   score="<<s2.score<<endl;
    //2.3在定义结构体时随便创建结构体变量//一般不建议使用
	s3.name="Mark";
	s3.age=22;
	s3.score=99;
	cout<<"name:"<<s3.name<<"   age:"<<s3.age<<"   score="<<s3.score<<endl;
	system("pause");
	return 0;
}