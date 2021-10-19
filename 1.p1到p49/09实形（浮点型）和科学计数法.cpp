#include<stdio.h>
#include<iostream>
using namespace std;
/*���ڱ�ʾС��
1.float������     ռ4�ֽ�     ��Ч��ֵ��Χ��7λ // 3.14��3λ��Ч��ֵ��Χ
2.double˫����    8                                  15~16
Ĭ����������һ��С����ʾ6λ��Ч����
*/
int main()
{
	float f1 = 3.14;//������Ĭ��С����double����������3.14�Ͽ�����
	float f2 = 3.14f;//��f��������Ϊ��float
	cout << "f1=" <<f1<< endl;
	cout << "f2=" << f2 << endl;//��ӡ����ûɶ����
	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;//ֻ����ʾ3.14159��6λ��
	//��ѧ������
	float f3=3e2;//3*10^2
	float f4=3e-2;//3*0.1^2
	cout << "f3=" << f3 << endl;
	cout << "f4=" << f4 << endl;
	system("pause");
	return 0;
}
