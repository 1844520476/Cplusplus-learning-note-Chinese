#include<stdio.h>
#include<iostream>
using namespace std;
//指针和数组
//利用指针访问数组中的元素
	int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<arr[0]<<endl;
    int*p=arr;
    //arr就是数组首地址。区别int*p=&a;
    cout << "a[0]=" <<*p<< endl;
    p++;//后移4字节
    cout << "a[1]=" <<*p<<"\n"<<endl;
    int*p2=arr;
    for(int i=0;i<10;i++)
    {
        cout<<"a["<<i<<"]="<<arr[i]<<endl;//数组显示
        cout<<*p2<<endl;//指针显示
        p2++;
    }
	system("pause");
	return 0;
}