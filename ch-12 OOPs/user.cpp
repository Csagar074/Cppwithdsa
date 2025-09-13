#include <iostream>
using namespace std;
#include <string.h>

class User{
    private:
    int id;
    char userName[20];
    string email;
    char password[20];

    public:

    // setter 
    
     void setuserData(int id,char userName[],string emai,char password[]){
            this ->id = id;
            strcpy(this ->userName,userName);

            this ->email = email;
            strcpy(this ->password,password);

     }
    // getter 

void getuserData(){
cout  <<endl <<endl;

cout <<"userId \t:" <<this->id <<endl ;
cout <<"userName \t:" <<this->userName <<endl;
cout <<"useremail \t:" <<this->email <<endl;
cout <<"userpassword \t:" <<this->password <<endl;

}
};
