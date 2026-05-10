#include<iostream>
using namespace std;
int x=5,y=7;
void myFunction()
{
    int y=10;
    cout<<"x from myfunction is "<<x<<endl;
    cout<<"y from myfunction is "<<y<<endl;
}
int main()
{
    cout<<"x from main is "<<x<<endl;
    cout<<"y from main is "<<y<<endl;
    myFunction();
    cout<<"back from myfunction "<<endl;
    cout<<"x from main is "<<x<<endl;
    cout<<"y from main is "<<y<<endl;
    return 0;
}
