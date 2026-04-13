#include<iostream>
using namespace std;
int main()
{
    int n=18;
    int m=0;
    while(m!=n)
    {
        cout<<"猜猜我心里想的是哪个数字？"<<endl;
        cin>>m;
        if(n>m)
        {
            cout<<"你猜的数字小了！"<<endl;
        }
        else if(n<m)
        {
            cout<<"你猜的数字大了！"<<endl;
        }
        else
        {            cout<<"恭喜你，猜对了！"<<endl;
        }   
    }
    return 0;
}
