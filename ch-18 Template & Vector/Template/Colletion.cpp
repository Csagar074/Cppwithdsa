#include <iostream>
using namespace std;

template <typename T>
class List{
    private:

    int *size;
    int *index =new int(0);
    T *arr;

    public:
    List(int size){
        arr =new T[size];

        this-> size = new int(size);
        arr=new T(*thiss->size);

        // if(arr !=nullptr){
        //     cout <<"Array is allocation..."<endl;
        // }
    }
    ~List(){
        delete[]arr;
        delete size;
        delete index;

        arr =nullptr;
        size =nullptr;
        index =nullptr;
    }

};
int main(){
    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.push(40);
    arr.push(50);

    1
}