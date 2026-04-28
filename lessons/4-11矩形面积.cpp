#include<iostream>
using namespace std;

class rectangle
{
    public:
        rectangle(double l, double w)
        {
            length = l;
            width = w;
        }
        double area()
        {
            return length * width;
        }
        float getlength()
        {
            return length;
        }
        float getwidth()
        {
            return width;
        }


    private:
        double length;
        double width;
};

int main()
{
    double l, w;
    cout << "请输入矩形的长和宽：";
    cin >> l >> w;
    rectangle rect(l, w);
    cout << "矩形的面积为：" << rect.area() << endl;
    return 0;
}