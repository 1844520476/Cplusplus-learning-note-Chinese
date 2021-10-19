#include<stdio.h>
#include<iostream>
using namespace std;
/*
�Ӽ��̻�ȡ����
cin>>����
*/
int main()
{
	//1.����
	/* int a = 0;
	cout << "������ͱ�����ֵ" << endl;
	cin >> a;//�������
	cout <<"a="<< a << endl;
	//2.������
	int f = 0;
	cout << "��������ͱ�����ֵ" << endl;
	cin >> f;//�������
	cout << "f=" << f << endl;*/
	//3.������
	bool flag = true;
	cout << "��������ͱ�����ֵ,ԭʼֵΪ" << flag<<endl;
	if (flag)
	{
		cin >> flag;//�������
		cout << "flag=" << flag << endl;//Ϊʲô����true��false�����flag=0
	};
	system("pause");
	return 0;
}