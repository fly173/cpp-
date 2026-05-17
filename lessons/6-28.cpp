#include <iostream>
using namespace std;

// 将实数 x 分成整数部分和小数部分，形参 intPart、fracPart 是引用
void splitFloat(float x, int &intPart, float &fracPart)
{
    intPart = static_cast<int>(x);    // 取 x 的整数部分
    // 显式转换 intPart 为 float，避免隐式转换警告
    fracPart = x - static_cast<float>(intPart);           // 取 x 的小数部分
}

int main()
{
    cout << "Enter 3 float point numbers: " << endl;
    for (int i = 0; i < 3; i++)
    {
        float x, f;
        int n;
        cin >> x;
        splitFloat(x, n, f);
        cout << "Integer Part=" << n << " Fraction Part=" << f << endl;
    }
    return 0;
}