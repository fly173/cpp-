#include"my_x_y_z.h"
int main()
{
    X x;
    Z z;
    z.f(&x);
    return 0;
}
#ifndef MY_X_Y_Z_H
class X;
class Y{
    public:
    void g(X*);
};
class X
{
    private:
    int i;
    public:
    X():i(0){}
    friend void Y::g(X*);
    friend void h(X*);
    friend class Z;
};
void Y::g(X* x)
{
    x->i=1;
}
void h(X* x)
{
    x->i=2;
}
class Z
{
    public:
    void f(X* x)
    {
        x->i=3;
    }
};
#endif
