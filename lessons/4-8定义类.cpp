#include<iostream>
using namespace std;

class dog{
    public:
    dog(int initialage=0,int initialweight=5);
    ~dog();
    int getage()
    {
        return age;
    }
    void setage(int age)
    {
        this->age=age;

    }
    int getweight()
    {
        return weight;
    }
    void setweight(int weight)
    {
        this->weight=weight;

    }
    private:
    int age,weight;
};

dog::dog(int initialage,int initialweight)
{
    age=initialage;
    weight=initialweight;
}

dog::~dog()
{
}

int main()
{
    dog jack(2,10);
    cout<<"jack is a dog who is";
    cout<<jack.getage()<<" years old and"<<jack.getweight()<<" pounds weight"<<endl;
    jack.setage(7);
    jack.setweight(20);
    cout<<"now jack is";
    cout<<jack.getage()<<" years old and"<<jack.getweight()<<" pounds weight"<<endl;
     
    
    return 0;
}