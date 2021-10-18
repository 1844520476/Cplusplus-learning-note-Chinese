#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 99
#define MIN 19
//数组冒泡排序
/*
1.创建数组
2.创建函数，实现冒泡排序
3.打印排序后的数组
*/
void BubbleSort(int* arr,int len)//参数1 数组首地址 参数2 数组长度
{
	for(int j=0;j<len-1;j++)
{
	for(int i=0;i<len-1-j;i++)
	{
		if(arr[i+1]<arr[i])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}
	for(int i=0;i<len;i++)cout<<"arr["<<i+1<<"]="<<arr[i]<<endl;
	return;
}
	int main()
{
	int arr[10]={};
	for(int i=0;i<10;i++)
	{
		arr[i]=rand()%(MAX-MIN+1)+MIN;
        cout<<"arr["<<i+1<<"]="<<arr[i]<<endl;
	}
	cout<<"\n\n"<<endl;
	int len=sizeof(arr)/sizeof(arr[0]);
	cout<<"len="<<len<<endl;
	BubbleSort(arr,len);
	system("pause");
	return 0;
}