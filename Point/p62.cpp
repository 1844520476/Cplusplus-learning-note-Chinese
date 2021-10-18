#include<stdio.h>
#include<iostream>
using namespace std;
//指针与函数
void swap1(int num1,int num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"swap1\na="<<num1<<"\nb="<<num2<<endl;
    cout<<num1<<"\n"<<num2<<endl;
}
void swap2(int* num1,int* num2)
{
    int* temp=num1;
    num1=num2;
    num2=temp;  
    cout<<"swap2\na="<<*num1<<"\nb="<<*num2<<endl; 
    cout<<num1<<"\n"<<num2<<endl;
}
void swap3(int* num1,int* num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;  
    cout<<"swap3\na="<<*num1<<"\nb="<<*num2<<endl; 
    cout<<num1<<"\n"<<num2<<endl;
}	
int main()
{
	int a=1,b=2;
    swap1(a,b);
    int* p1=&a,* p2=&b;//不要和p2=&b与*p2=b搞混
    //int* p1=&a,p2=&b;//error
    //int* p2=&b;//true
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;//实参没变

    swap2(p1,p2);
    //swap(a,b);//error
    cout<<p1<<"\n"<<p2<<endl;
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;//实参没变

    swap3(&a,&b);
    cout<<p1<<"\n"<<*p2<<endl;
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;//实参变

	system("pause");
	return 0;
}