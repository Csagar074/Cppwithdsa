#include <iostream>
using namespace std;

template<typename T1,typename T2>
class Temp{
    private:

    T1 x;
    T2 y;

    public:
    Temp(T1 x,T2 y){
        this->x =x;
        this->y =y;
    }
    void getData(){
        cout <<"x :" <<this->x 
        <<endl <<"y :"<<this->y <<endl;
    }

};

int main(){
    Temp<int,double>T1(45,96.38);
    T1.getData();

    return 0;
}