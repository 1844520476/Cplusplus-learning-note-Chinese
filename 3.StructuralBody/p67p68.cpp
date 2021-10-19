#include<stdio.h>
#include<iostream>
using namespace std;
//p67:结构体嵌套结构体：结构体中的成员可以说另一个结构体
//p68:结构体作函数参数
struct Student
{
    string name;
    int age;
    int score;
};
struct Teacher
{
	string name;
	int id;
	struct Student stu;//学生结构体
};
void printStudent_1(struct Teacher s)//值传递
{
	s.stu.age=80;//值传递不会影响实参
	cout<<"functio_1 name:"<<s.stu.name
	<<"  age:"<<s.stu.age<<endl;
}
void printStudent_2(struct Teacher* p)//地址传递(注意定义的p和底下的p)
{
	p->stu.name="LaoBa";//地址传递会影响实参
	cout<<"functio_2 name:"<<p->stu.name
	<<"  age:"<<p->stu.age<<endl;
}
int main()
{
	//创建老师
	Teacher t;
	t.name="Jack";
	t.id=101010;
	t.stu.name="Dave";//赋值子结构体
	t.stu.age=19;
	t.stu.score=99;
	Teacher s[2]={{"Karl",10101,"Hallen",29,100}};
	cout <<"teacher's name:"<<t.name
	<<"\nTeacher's id:"<<t.id
	<<"\nStudent's name:"<<t.stu.name
	<<"\nStudent's age:"<<t.stu.age
	<<"\nStudent's score:"<<t.stu.score<< endl;
	cout<<"\ns[1].stu.name:"<<s[0].stu.name<<endl;
	//p68
	//Student stu s;//error
	//struct Student* p=&s;//不需要
	//1.值传递
	printStudent_1(t);
	//2.地址传递
    printStudent_2(&t);
	cout<<"main name:"<<t.stu.name
	<<"  age:"<<t.stu.age<<endl;
	system("pause");
	return 0;
}