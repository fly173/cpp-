#include <iostream>
#include <cstring>  // strcpy 需要这个头文件
using namespace std;

class Employee
{
private:
    char name[30];    // 姓名
    char street[30];  // 地址
    char city[18];    // 城市
    char zip[6];      // 邮编

public:
    // 构造函数：参数改为 const char*
    Employee(const char *n, const char *str, const char *ct, const char *z);
    
    // 修改姓名的成员函数：参数改为 const char*
    void setName(const char *n);
    
    // 显示员工信息的成员函数
    void display();
};

// 构造函数实现
Employee::Employee(const char *n, const char *str, const char *ct, const char *z)
{
    // 为了安全，建议使用 strncpy 防止缓冲区溢出，这里保留原逻辑但确保源是 const
    strcpy(name, n);
    strcpy(street, str);
    strcpy(city, ct);
    strcpy(zip, z);
}

// setName 成员函数实现
void Employee::setName(const char *n)
{
    strcpy(name, n);
}

// display 成员函数实现
void Employee::display()
{
    cout << name << "\t" << street << "\t";
    cout << city << "\t" << zip << endl;
}

int main()
{
    // 创建 Employee 对象并初始化
    // 现在可以合法地传入字符串字面量
    Employee e1("张三", "平安大街3号", "北京", "100000");
    
    // 显示初始信息
    e1.display();

    // 修改姓名并重新显示
    e1.setName("李四");
    e1.display();

    return 0;
}