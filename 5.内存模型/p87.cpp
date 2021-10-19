#include<stdio.h>
#include<iostream>
using namespace std;
//p86.程序运行后
//堆区（程序员管理）
//new运算符

//p.87 1.new的基本语法
int* func()
{
	//利用new关键字，可以开辟到堆区
    int*p=new int(10);//创建了一个堆区数据，new返回的是该数据类型的地址
    return p;
}

int* func2()
{
    //2.在堆区利用new开辟数组
    int*arr_p=new int[10];
    for(int i=0;i<10;i++)
    {
        arr_p[i]=rand()%9+10;//注意数组索引方式
        cout<<"arr["<<i+1<<"]:"<<arr_p[i]<<endl;
    }
    delete[] arr_p;//释放堆区数组
    return arr_p;
}

int main()
{
	int*p=func();
	cout << "number:"<<*p<< endl;
    cout << "number:"<<*p<< endl;
    cout << "number:"<<*p<< endl;
    cout << "number:"<<*p<< endl;
    //释放堆区数据
    delete p;
    cout << "number:"<<*p<< endl;

    func2();
	system("pause");
	return 0;
}