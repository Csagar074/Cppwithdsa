#include <iostream>
using namespace std;

class Result{

    protected:

    char sub[7];
    int mark;

    public :
    // seter 
    void SetMarkData(){
        cout <<"Enter Your Sub Name: ";
        cin >>sub;

        cout  <<"Enter The"<<sub <<"Mark :";
        cin >>mark;

    }

    // getter 
    void SetMarkData(){
        cout <<sub <<" : "<<mark <<endl;
    }

    Result operator+(int n){
        Result tepry;
        tepry.mark =this->mark+n;

        return tepry;
    }
    void getGujratiData(){
        cout <<"Gujrati :"<<mark <<endl;
    }

      void getMathData(){
        cout <<"Math :"<<mark <<endl;
    }

      void getEnglishData(){
        cout <<"English :"<<mark <<endl;
    }
      void getMathData(){
        cout <<"Math :"<<mark <<endl;
    }
      void getSSData(){
        cout <<"SS :"<<mark <<endl;
    }
       void getComData(){
        cout <<"Computer:"<<mark <<endl;
    }
};
