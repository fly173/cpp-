#include<iostream>
using namespace std;
int main()
{
    int intone;
    int &rsomeref=intone;
    intone=10;
    cout<<"intone:\t"<<intone<<endl;
    cout<<"rsomeref:\t"<<rsomeref<<endl;
    cout<<"&intone:\t"<<&intone<<endl;
    cout<<"&rsomeref:\t"<<&rsomeref<<endl;

    int inttwo=8;
    rsomeref=inttwo;
    cout<<"\nintone:\t"<<intone<<endl;
    cout<<"rsomeref:\t"<<rsomeref<<endl;
    cout<<"inttwo:\t"<<inttwo<<endl;
    cout<<"&intone:\t"<<&intone<<endl;
    cout<<"&rsomeref:\t"<<&rsomeref<<endl;
    cout<<"&inttwo:\t"<<&inttwo<<endl;

        return 0;
}