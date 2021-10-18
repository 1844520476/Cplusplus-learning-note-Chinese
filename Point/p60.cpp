#include<stdio.h>
#include<iostream>
using namespace std;
//const修饰指针
//
	int main()
{
    int a=10,b=20;
    
    //const int *p=&a;

    //1.常量指针
    //特点：指针指向可以改，指向的值不可改
    
    /*
    *p=20;//error
    p=&b;//true
	cout <<"p="<<p<< endl;
    */

    //2.指针常量（定指针变量）
    
    //int* const p=&a;

    //特点：指针指向不可以改，指向的值可以改
    
    /**p=20;//true
    p=&b;//error
	cout <<"p="<<p<< endl;*/

    //3.const既修饰指针，又修饰常量
    const int* const p=&a;
    *p=b;//error
    p=&b;//error
	system("pause");
	return 0;
}