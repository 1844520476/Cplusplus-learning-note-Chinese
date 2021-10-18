#include<stdio.h>
#include<iostream>
#include<ctime>
using namespace std;
#define N 3
#define MIN 40
#define MAX 100
struct Student 
{
    string Name;
    int ID;
};
struct Teacher
{
    string TName;
    int TID;
    struct Student sArray[5];
};
void AllocateSpace(struct Teacher tArray[],int len)//注意形参的写法（与实参区别）
{
    string Nameseed="ABCDE";
    for(int i=0;i<len;i++)
    {
        tArray[i].TName="Teacher_";
        tArray[i].TName+=Nameseed[i];//注意这种命名技巧
        for(int j=0;j<5;j++)
        {
            tArray[i].sArray[j].Name="Student_";//sArray妹妹要一致
            tArray[i].sArray[j].Name+=Nameseed[j];
        }
    }
}

void PrintInfo(Teacher tArray[],int len)
{
    srand((unsigned)time(NULL));
    for(int i=0;i<len;i++)
    {
        cout<<"teacher's name:"<<tArray[i].TName<<endl;
        for(int j=0;j<5;j++)
        {
            tArray[i].sArray[j].ID=rand()%(MAX-MIN+1)+MIN;
            cout<<"\n\tStudent's name:"<<tArray[i].sArray[j].Name
            <<"\tStudent's score:"<<tArray[i].sArray[j].ID<<endl;
        }
    }
}

int main()
{
    Teacher tArray[N];
    //int len=sizeof(tArray)/sizeof(tArray[0]);
    int len=N;
    AllocateSpace(tArray,len);//注意实参传递方法
    PrintInfo(tArray,len);
	system("pause");
	return 0;
}     