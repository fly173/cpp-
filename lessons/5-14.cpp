#include<iostream>
using namespace std;

class boat;
class car{
    private:
      int weight;
    public:
       car(int j){
           weight = j;
       }
       friend int gettotalweight(car &acar, boat &aboat);
};

class boat{
    private:
      int weight;
    public:
       boat(int j){
           weight = j;
       }
       friend int gettotalweight(car &acar, boat &aboat);
};

int gettotalweight(car &acar, boat &aboat){
    return acar.weight + aboat.weight;
}
int main(){
    car c(4);
    boat b(5);
    cout << "总重量为：" << gettotalweight(c, b) << endl;
    return 0;
}
