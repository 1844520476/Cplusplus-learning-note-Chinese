#include<stdio.h>
#include<iostream>
using namespace std;
#define N 6//课程数
//二位数组案例：成绩统计
struct Student 
{
	string name; 
	int score[N]={0};
};

int main()
{
	Student sArray[3];
    for(int k=0;k<N;k++)
	{
		sArray.score[k]=rand()%100;
	}
	string NameSeed="ABCDEF";
	for(int i=0;i<3;i++)
	{
		sArray.name="Student_";
		sArray.name+=NameSeed[i];
		cout<<"student["<<i+1<<"]:"<<sArray.name[i]<<" "<<endl;
		for(int j=0;j<N;j++)
		{
			cout<<sArray.score[i][j]<<endl;
		}
		cout<<"\n"<<endl;
	}
	system("pause");
	return 0;
}