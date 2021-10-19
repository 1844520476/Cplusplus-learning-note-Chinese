#include<stdio.h>
#include<iostream>
using namespace std;
/*
ת���ַ�����ʾ������ʾ������ASCII�ַ�
*/
int main()
{
	cout << "\\" << endl;//��������\���������һ����\��
	cout << "aaa\tHelloWorld" << endl;//��ˮƽ�Ʊ��������ڶ��룩�ո񳤶�ȡ����aaa��ռ����(һ��\t��8���ո�λ�ã�
	cout << "a\tHelloWorld" << endl;
	cout << "aaaaa\tHelloWorld" << endl;
	cout << "aaa\nHelloWorld" << endl;
	system("pause");
	return 0;
}