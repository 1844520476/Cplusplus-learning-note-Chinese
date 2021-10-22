#include <stdio.h>
#include <iostream>
#define N 5
using namespace std;
//寻找重复的数字\

int main()
{
    string str = "Hello";
    // string *p = "Hello"; // error
    // char *p = &str; // error
    char *p = "Hello";
    // free(p); //释放内存必须从首地址开始
    p++;
    p++;
    cout << "char:" << *p++ << endl;
    system("pause");
    return 0;
}