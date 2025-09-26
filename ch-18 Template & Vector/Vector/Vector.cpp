#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int>V1;

    vector<int> V2(10,15);

    vector<int>V3{10,15,20,22};

    cout<<V3[0]<<endl;
    cout<<V3[1]<<endl;
    cout<<V3[2]<<endl;
    cout<<V3[3]<<endl;
    cout<<V3[4]<<endl;

    return 0;
}