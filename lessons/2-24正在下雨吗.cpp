#include<iostream>
using namespace std;
int main(){
    char flag;
    while(1)
    {
        cout<<"现在在下雨吗 (y/n)"<<endl;
        cin>>flag;
        if(toupper(flag)=='Y')
        {
            cout<<"记得带伞哦！"<<endl;
        }
        else if(toupper(flag)=='N')
        {
            cout<<"今天天气不错！"<<endl;
        }
        else
        {
            cout<<"输入有误，请重新输入！"<<endl;
        }
        return 0;
    }
}