#include<iostream>
using namespace std;
int main()
{
    int i,score;
    cout<<"你考试考了多少分？(0-100)"<<endl;
    cin>>score;
    if(score>100||score<0)
    cout<<"分数值必须在0到100之间:"<<endl;
    else 
    {
        i=score/10;
        switch(i)
        {            case 10:
            case 9:cout<<"你的成绩为优秀"<<endl;break;
            case 8:cout<<"你的成绩为良好"<<endl;break;
            case 7:cout<<"你的成绩为中等"<<endl;break;
            case 6:cout<<"你的成绩为及格"<<endl;break;
            default:cout<<"你的成绩为不及格"<<endl;break;
        }
    }
    return 0;
}