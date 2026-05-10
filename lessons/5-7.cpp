#include<iostream>
using namespace std;

class cat{
    public:
        cat(int age){
            itsage(age){
                numofcat++;
            }
        }
        virtual ~cat(){
            numofcat--;
        }
        virtual int getage(){
            return itsage;
        }
        virtual void setage(int age){
            itsage=age;
        }
        static int getnumofcat(){
            return numofcat;
        }
    private:
        int itsage;
    static int numofcat;

};
int cat::numofcat=0;
void telepathicfunction();

int main(){
    const int maxcats=5;
    cat* cats[maxcats];
    for(int i=0;i<maxcats;i++){
        cats[i]=new cat(i+1);
        telepathicfunction();
    }
    for (int i=0;i<maxcats;i++){
        delete cats[i];
        telepathicfunction();
    }
    return 0;
}   
void telepathicfunction(){
    cout<<"现在有"<<cat::getnumofcat()<<"只猫"<<endl;
}
