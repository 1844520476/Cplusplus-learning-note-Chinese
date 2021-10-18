#include"swap.h"//与头文件建立联系
//函数定义
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}