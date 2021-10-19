#include<stdio.h>
#include<iostream>
using namespace std;
/*
�ַ��ͱ���������ʾ�����ַ�
�﷨��char ch='a';//����������ֻ����һ���ַ�
1.�ַ��ͱ���������ʽ
2.��ռ�ڴ�ռ�//1�ֽ�
3.��������//�����ţ������ַ�
4.��Ӧ��ASCII��//aΪ97��AΪ65
*/
int main()
{
	char ch ='x';
	int a=sizeof(char);
	cout << "ch=" <<ch<< endl;
	cout << "sizeof(char)=" << sizeof(char) << endl;
	cout << "sizeof(char)=" << sizeof(ch) << endl;
	cout << "sizeof(char)=" << a << endl;
	cout << "ch��ASCII���ǣ�"<<(int)ch << endl;
	system("pause");
	return 1;
}