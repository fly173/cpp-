#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char choice,c;
    while(1)
    {
        cout<<"menu:a(dd) d(elete) s(ort) q(uit),select a function:";
        cin>>c;
        choice=toupper(c);
        if(choice=='A')
        {
            cout<<"add function"<<endl;
        }
        else if(choice=='D')
        {
            cout<<"delete function"<<endl;
        }
        else if(choice=='S')
        {
            cout<<"sort function"<<endl;
        }
        else if(choice=='Q')
        {
            cout<<"quit function"<<endl;
            break;
        }
        else
        {
            cout<<"invalid choice,try again!"<<endl;
        }
    }
}