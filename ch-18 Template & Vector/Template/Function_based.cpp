#include <iostream>
using namespace std;
template <typename T>

T addtion(T a,T b){
return a +b;

}
template<typename T>
T input(T n){
    cin >>n;

    return n;
}
 main(){
    cout<< addtion<int>(10,20) <<endl;

  cout<< addtion<double>(25.74,20.18) <<endl;

  int a;
  float PI;
  char  ch;

  cout<<"Enter any Number :";
  a=input(a);

  cout <<"Enter PI Value :";
  PI=input(PI);
    return 0;
}