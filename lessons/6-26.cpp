#include <iostream>
using namespace std;

// 矩阵转置函数（一维指针实现）
void move(int *matrix, int n)
{
    int i, j, k;
    // 只遍历上三角部分，避免重复交换
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            // 交换 matrix[i][j] 和 matrix[j][i]
            k = *(matrix + i * n + j);
            *(matrix + i * n + j) = *(matrix + j * n + i);
            *(matrix + j * n + i) = k;
        }
    }
}

int main()
{
    int n, i, j;
    int *p;

    cout << "请输入矩阵的行、列数：";
    cin >> n;

    // 动态分配矩阵空间（一维数组模拟二维矩阵）
    p = new int[n * n];

    cout << "输入矩阵的元素" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "第" << i + 1 << "行第" << j + 1 << "个元素为：";
            cin >> p[i * n + j];
        }
    }

    // 输出原矩阵
    cout << "输入的矩阵为：" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << p[i * n + j] << " ";
        }
        cout << endl;
    }

    // 调用转置函数
    move(p, n);

    // 输出转置后的矩阵
    cout << "转置后的矩阵为：" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << p[i * n + j] << " ";
        }
        cout << endl;
    }

    // 释放动态分配的内存
    delete[] p;
    return 0;
}