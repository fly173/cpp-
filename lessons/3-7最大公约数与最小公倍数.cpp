#include<iostream>
#include<cmath>
using namespace std;

int fn1(int i,int j);

int main()
{
    int i,j,x,y;
    cout<<"请输入一个正整数：";
    cin>>i;
    cout<<"请输入另一个正整数：";
    cin>>j;
    x=fn1(i,j);
    y=i*j/x;
    cout<<"最大公约数为："<<x<<endl;
    cout<<"最小公倍数为："<<y<<endl;
    return 0;
}

int fn1(int i,int j)
{
    int m,n;
    m=i;
    n=j;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    return m;
}
