#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
//结构体数组
//语法：struct 结构体名 数组名[元素个数]={{},{},...{}}
int main()
{
	//1.定义结构体
    struct Student
    {
        string name;
        int age;
        int score;
    };
    //2.创建结构体数组
    struct Student StuArr[3]=
    {
        {"Jack",22,100},
        {"Mark",22,99},
        {"Zark",23,98},
    };
    //3.给结构体数组赋值
    StuArr[2].name="Larry";
    StuArr[1].score=100;
    //4.遍历结构体数组
    for(int i=0;i<3;i++)
    {
        cout<<"name["   <<i+1<<"]:" <<StuArr[i].name
            <<"\nage["  <<i+1<<"]:" <<StuArr[i].age
            <<"\nscore["<<i+1<<"]:" <<StuArr[i].score<<endl;
    }
	system("pause");
	return 0;
}