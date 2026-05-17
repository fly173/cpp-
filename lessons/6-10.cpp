#include<iostream>
using namespace std;
int main()
{
    int myarray[5] ;
    for(int i = 0; i < 5; i++)
    {
        cout << "Value for myarray[" << i << "]: " << myarray[i] << endl;
        cin >> myarray[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout << "Value for myarray[" << i << "]: " << myarray[i] << endl;
    }
     return 0;

}