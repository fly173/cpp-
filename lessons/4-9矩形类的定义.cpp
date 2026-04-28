#include<iostream>
using namespace std;
   
class rectangle{
    public:
    rectangle(int top,int left,int bottom,int right);
    ~rectangle(){}

    int gettop()const{return this->top;}
    int getleft()const{return this->left;}
    int getbottom()const{return this->bottom;}
    int getright()const{return this->right;}
    void settop(int top){
        this->top=top;
    }
    void setleft(int left){
        this->left=left;
    }
    void setbottom(int bottom){
        this->bottom=bottom;
    }
    void setright(int right){
        this->right=right;
    }

    int getarea()const;

    private:
    int top;
    int left;
    int bottom;
    int right;
};

rectangle::rectangle(int top,int left,int bottom,int right)
{
    this->top=top;
    this->left=left;
    this->bottom=bottom;
    this->right=right;
}

int rectangle::getarea() const{
    int width=this->right-this->left;
    int height=this->bottom-this->top;
    return width*height;
}

int main()
{
    rectangle  rect(100,20,50,80);
    cout<<"area of rect is "<<rect.getarea()<<endl;
    return 0;
}