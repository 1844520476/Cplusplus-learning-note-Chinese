#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<string>
using namespace std;
#define Costsize 500000
#define MIN 1
#define MAX 100
#define N 5//每次可以跨越n级台阶（有n种选择）

/*
#define N 100000
int climbStairs(int n)
{
	int f[n];
	f[0] = f[1] = 1;
    for(int i = 2; i <= n; ++i) 
	{
		f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main()
{
    int F=climbStairs(N);
	cout<<"f["<<N<<"]="<<F<<endl;
	system("pause");
	return 0;
}
*/

int f[Costsize+2];
int min(int a[], int b) //冒泡排序
{
    for(int i = 0; i < N;i++)
	{
		for(int j=1;j<N-i+1;j++)
		{
			if(a[i]>a[i+1])
			{
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			};
		}
	}
	return a[0];//返回最小值
}
int minCostClimbingStairs(int* cost, int costSize)//策略选择
{
    for(int k=0;k<N;k++)//初始化前N-1阶台阶为0
	{
		f[k] =0;
	}
    for(int i = N; i <= costSize; ++i) 
	{
        int Amout[N];
		for(int j=1;j<=N;j++)//计算N种策略的体力消耗
		{
			Amout[j-1]=f[i-j]+cost[i-j];
	    }
		f[i] = min(Amout,N);//选取最小体力消耗策略并更新
    }
    return f[costSize];//最终策略（确定值）
}

int main()
{
	srand((unsigned)time(NULL));//重新生成体力消耗值
	int cost[Costsize];
	for(int i = 0; i < Costsize; ++i)//体力消耗赋值
	{
		cost[i]=rand()%(MAX-MIN+1)+MIN;//在MIN到MAX间取整数值
	}
	int F=minCostClimbingStairs(cost, Costsize+2);//计算最小体力消耗策略
	cout<<"f["<<Costsize<<"]min="<<F<<endl;
	return 0;
}