//显示函数
#include <iostream>
using namespace std;
#define MAX 1000

struct Person //联系人数组
{
    string m_Name;
    bool m_Sex; // 1男 0.女
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct Addressbooks //通讯录结构体(abs)
{
    struct Person personArray[MAX];
    int m_Size; //当前记录联系人个数
};

// 1.添加联系人
void addPerson(Addressbooks* abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "通讯录人员已满" << endl;
        return;
    }
    else
    {
        //姓名
        string name;
        cout << "请输入姓名" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name; //记得,这里是abs是指针
        //性别
        while (1)
        {
            cout << "请输入(数字)性别:"
                << "1-male\n"
                << "0-female" << endl;
            int gender = 0;
            cin >> gender;
            if (gender == 1 || gender == 0)
            {
                abs->personArray[abs->m_Size].m_Sex = gender; //不要忘记[abs->m_Size]
                break;
            }
            else
            {
                cout << "请输入0或1" << endl;
            }
        }
        //年龄
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        //电话
        cout << "请输入联系方式" << endl;
        string Phone;
        cin >> Phone;
        abs->personArray[abs->m_Size].m_Phone = Phone;
        //家庭住址
        cout << "请输入家庭住址" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        //更新通讯录成功
        cout << "添加通讯录联系人成功" << endl;
        abs->m_Size++;
    }
    system("pause");
    cout << "请按任意键清屏" << endl;
    //清屏函数
    system("cls");
}

// 2.显示联系人(所有人)
void showPerson(Addressbooks* abs)
{
    if (abs->m_Size == 0)
    {
        cout << "当前通讯录中无联系人" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            //姓名
            cout << "\t姓名" << abs->personArray[i].m_Name << endl;
            //性别
            cout << "\tgender" << (abs->personArray[i].m_Sex == 1 ? "male" : "female") << endl; //好好看看look it seriously
            /*
            string sex;
            if(abs->personArray[i].m_Sex)
            {
                sex="male";
            }
            else
            {
                sex="female";
            }
            cout<<"\t性别"<<sex<<endl;
            */
            //年龄
            cout << "\tage:" << abs->personArray[i].m_Age << endl;
            //电话
            cout << "\tphone:" << abs->personArray[i].m_Phone << endl;
            //地址
            cout << "\taddress:" << abs->personArray[i].m_Addr << "\n"
                << endl; //\t水平制表符
        }
    }
    system("pause");
    cout << "请按任意键清屏" << endl;
    system("cls");
}

// 3.1检测联系人是否存在。若存在，返回联系人和具体位置（下标）；若不存在，返回-1
int isExist(Addressbooks* abs, string name) //参数1，得传入一个通讯录；参数2.查找对象姓名
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            // a[j]=i;j++;//万一重名
            return i; // return就直接结束函数了
        }
    }
    return -1;
}

// 3.2删除联系人
void deletePerson(Addressbooks* abs)
{
    cout << "请输入你想删除的联系人姓名:" << endl;
    string name;
    cin >> name;
    // ret==-1 未找到
    // ret！==-1 查到了
    int ret = isExist(abs, name); //这里的abs是指针
    if (ret == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        for (int i = ret; i < abs->m_Size; i++)
        {
            //数据前移
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
        cout << "删除成功" << endl;
    }
    system("pause");
    system("cls");
}

// 4.查找联系人(某个人)
void findPerson(Addressbooks* abs)
{
    cout << "请输入你要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        cout << "name:" << abs->personArray[ret].m_Name << endl;
        cout << "sex:" << (abs->personArray[ret].m_Sex == 1 ? "male" : "female") << endl;
        cout << "age:" << abs->personArray[ret].m_Age << endl;
        cout << "phone:" << abs->personArray[ret].m_Phone << endl;
        cout << "address:" << abs->personArray[ret].m_Addr << endl;
    }
    system("pause");
    system("cls");
}

// 5.修改联系人
void modifyPerson(Addressbooks* abs)
{
    cout << "请输入想修改的联系人姓名" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
        return;
    }
    else
    {
        //姓名
        string name;
        cout << "请输入姓名" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name; //记得,这里是abs是指针
        //性别
        while (1)
        {
            cout << "请输入性别:"
                << "1-male\n"
                << "0-female" << endl;
            int gender = 0;
            cin >> gender;
            if (gender == 1 || gender == 0)
            {
                abs->personArray[ret].m_Sex = gender; //不要忘记[abs->m_Size]
                break;
            }
            else
            {
                cout << "请输入0或1" << endl;
            }
        }
        //年龄
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;
        //电话
        cout << "请输入联系方式" << endl;
        string Phone;
        cin >> Phone;
        abs->personArray[ret].m_Phone = Phone;
        //家庭住址
        cout << "请输入家庭住址" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;
        //更新通讯录成功
        cout << "修改通讯录联系人成功" << endl;
    }
    system("pause");
    cout << "请按任意键清屏" << endl;
    system("cls");
}

// 6.清空联系人
void emptyPerson(Addressbooks* abs)
{
    cout << "请输入1以确认删除全部联系人" << endl;
    int redf = 0;
    cin >> redf;
    if (redf != 1)//C语言中不等于：!=,等于：==
    {
        return;
    }
    else if (abs->m_Size != 0)
    {
        for (int i = 0; i < abs->m_Size; abs->m_Size--)
        {
            for (int j = 0; j < abs->m_Size; j++)
            {
                //数据前移
                abs->personArray[j] = abs->personArray[j + 1];
            }
        }
        cout << "清空成功" << endl;
    }
    system("pause");
    system("cls");
}

//显示主菜单
void showMenu()
{
    cout << "************************" << endl;
    cout << "***** 1.添加联系人 *****" << endl;
    cout << "***** 2.显示联系人 *****" << endl;
    cout << "***** 3.删除联系人 *****" << endl;
    cout << "***** 4.查找联系人 *****" << endl;
    cout << "***** 5.修改联系人 *****" << endl;
    cout << "***** 6.清空联系人 *****" << endl;
    cout << "***** 0.退出通讯录 *****" << endl;
    cout << "************************" << endl;
}

//主函数
int main()
{
    Addressbooks abs; //创建通讯录结构体变量
    abs.m_Size = 0;

    int seclect = 0; //创建用户选择输入的变量
    while (1)
    {
        //菜单调用
        showMenu();
        cin >> seclect;
        switch (seclect)
        {
        case 1: // 1.添加联系人
            addPerson(&abs);
            break;
        case 2: // 2.显示联系人
            showPerson(&abs);
            break;
        case 3: // 3.删除联系人
            // 3.1封装检测联系人是否存在函数
            // 3.2封装删除联系人函数
            deletePerson(&abs);
            break;
        case 4: // 4.查找联系人
            findPerson(&abs);
            break;
        case 5: // 5.修改联系人
            modifyPerson(&abs);
            break;
        case 6: // 6.清空联系人
            emptyPerson(&abs);
            break;
        case 0: // 0.退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    system("pause");
    return 0;
}