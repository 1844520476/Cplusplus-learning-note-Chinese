#include<stdio.h>
#include<iostream>
using namespace std;
/*
����ֵ���� �������������б���
{
   ���������
   return����ʽ
}
*/
int add(int sum1, int sum2)//sum1��sum2Ϊ��ʽ�ϵĲ���
{
	int sum = sum1 + sum2;
	return sum;//����ֵsumҪ�뷵��ֵ����int��Ӧ
}
int main()
{
	int a = 18, b = 68;
	//���������﷨���������ƣ�������
	int c = add(a, b);//a��bΪʵ�ʲ���
	cout << "a+b="<<c << endl;//a,b,c�ֱ��Ӧsum1,sum2,sum;��Ӧ��������Ҫһ��
	system("pause");
	return 0;
}