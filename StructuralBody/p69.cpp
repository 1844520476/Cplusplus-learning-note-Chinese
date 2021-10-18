#include<stdio.h>
#include<iostream>
using namespace std;
//结构体中const使用场景
struct Student
{
    string name;
    int age;
    int score;
};
void printStudent(const Student*p)//用指针可节省空间
{
    //*p.age=120;//error s.name与p->name
    //p->age=150;//家人const,防止误操作
    //p->age=p->score;//这里是（变量）数值覆盖操作
    cout<<"name:"<<p->name
    <<" age"<<p->age<<endl;
}
	int main()
{
	Student s1={"Jack",19,88};
    printStudent(&s1);
	system("pause");
	return 0;
}     
