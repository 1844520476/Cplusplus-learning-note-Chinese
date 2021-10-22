#include <stdio.h>
#include <iostream>
#define N 5
using namespace std;
//寻找重复的数字

int duplicate(int *nums, int N_size);
void swap_nums(int *i, int *j);

int main()
{
    int nums[N];
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i]; //输入数字必须小于N
        cout << "nums[" << i + 1 << "]=" << nums[i] << endl;
    }
    // cout << "\nWTF1" << endl; //测试用
    int dup_ret = duplicate(nums, N);
    // cout << "\nWTF2" << endl;
    if (dup_ret != -1)
    {
        cout << "重复的数字是" << dup_ret << endl;
    }
    else
    {
        cout << "无重复的数字" << endl;
    }
    system("pause");
    return 0;
}

// 寻找过程（核心算法）
int duplicate(int *nums, int N_size)
{
    // cout << "\nWTF1.1" << endl;
    int *p = nums;
    for (int i = 0; i < N_size; i++)
    {
        while (nums[i] != i)
        {
            // cout << "\nWTF1.1.1" << endl;
            if (nums[i] == nums[nums[i]]) // 令k=nums[i] != i -> nums[k]=nums[i](k!=i) -> 有重复
            {
                // cout << "\nWTF1.1.2" << i << endl;
                return nums[i];
            }
            // cout << "\nWTF1.1.3" << endl;
            swap_nums(nums + i, nums + nums[i]);
        }
        // cout << "\nWTF1.2." << i << endl;
        swap_nums(nums + i, nums + nums[i]); //不太懂，要这一行干什么
    }
    return -1;
}

// 交换
void swap_nums(int *i, int *j)
{
    int *temp = i;
    i = j;
    j = temp;
}