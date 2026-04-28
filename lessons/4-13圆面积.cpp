#include<iostream>
using namespace std;


class circle{
    public:
        circle(float r)
        {
            this->r=r;
        }
        ~circle(){}
        float area()
        {
            return 3.14*r*r;
        }


    private:
        float r;
};
int main()
{
    float r;
    cout<<"请输入圆的半径：";
    cin>>r;
    circle c(r);
    cout<<"圆的面积为："<<c.area()<<endl;
    return 0;
}