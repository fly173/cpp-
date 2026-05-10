#include<iostream>
using namespace std;

#include"fn1,h"
int n;
int main()
{
    n=20;
    fn1();
    cout<<n<<endl;
        return 0;
}
extern int n;
void fn1()
{
    n=30;
}
