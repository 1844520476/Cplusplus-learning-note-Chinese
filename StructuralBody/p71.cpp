#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<time.h>
using namespace std;
#define N 20//N_MAX is 26
#define MIN 16
#define MAX 60
struct hero
{
    string name;
    int age;
    bool gender;
};

void herobubble(hero hArray[],int len)//地址传递,hArray[]在这里相当于首地址
{
    for(int j=0;j<len-1;j++)
    {
        for(int i=0;i<len-j-1;i++)
        {
            if(hArray[i].age>hArray[i+1].age)
            {
                hero temp=hArray[i];
                hArray[i]=hArray[i+1];
                hArray[i+1]=temp;
            }
        }
    }
    return;
}

void herooutput(hero hArray[],int len)//形参int len不能写成int N，不能重名
{
    for(int i=0;i<N;i++)
    {
        cout<<"name["<<i+1<<"]:"<<hArray[i].name
        <<"\nage:"<<hArray[i].age<<endl;
        if(hArray[i].gender)
        cout<<"gender:male\n"<<endl;
        else 
        cout<<"gender:female\n"<<endl;
    }
}

int main()
{
    hero hArray[N];
    int len=sizeof(hArray)/sizeof(hArray[0]);
    cout<<"len="<<len<<"\n"<<endl;
    srand((unsigned)time(NULL));//没有“=”
    for(int i=0;i<len;i++)
    {
        hArray[i].age=rand()%(MAX-MIN+1)+MIN;
        string nameseed="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        hArray[i].name="hero_";
        hArray[i].name+=nameseed[i];
        hArray[i].gender=rand()%2;
    }
    herobubble(hArray,len);
    /*
    for(int i=0;i<len;i++)
    {
        cout<<"name:"<<hArray[i].name
        <<"  age:"<<hArray[i].age
        <<"  gender:"<<hArray[i].gender<<endl;
    }
    */
    herooutput(hArray,len);//注意传递方式,首地址和长度
    system("pause");
    return 0;
}