#include <iostream>
using namespace std;

class Maximum{
    private:
     int n;
    public:

// setter       
    void SetNumData(){
     
        cout <<"Enetr Your Number:";
        cin >>this->n;
    }
    // getter 
    void getNumData(){
        cout <<endl <<"The Maximum Number :" <<this->n;
    }

    Maximum operator>(Maximum object){
        Maximum tepry;

        if(this ->n >object.n){
            tepry.n =this ->n;
        }
        else{
            tepry.n =object.n;
        }
    return tepry;
    }
};