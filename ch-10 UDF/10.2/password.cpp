
#include<iostream>
#include<string.h>
using namespace std;
int checkPassword(string pass, int upr, int lwr, int digit, int symbol){
    if (pass.length() > 6)
    {
        for (int i = 0; i < pass.length(); i++)
        {
            if (pass[i] >= 'A' && pass[i] <= 'Z')
            {
                upr++;
            }
            else if (pass[i] >= 'a' && pass[i] <= 'z')
            {
                lwr++;
            }
            else if (pass[i] >= '0' && pass[i] <= '9')
            {
                digit++;
            }
            else
            {
                symbol++;
            }
            
        }
        if (upr > 0 && lwr > 0 && digit > 0 && symbol >0)
        {
            return 1;
        }
        else{
            return 0;
        }
        
        
        
    }
    else{
        return 0;
    }
    
}
int main(){
    string pass;
    int upr=0, lwr=0 , digit = 0,symbol = 0;
    cout << "Enter Strong Password := ";
    cin >> pass;
    checkPassword(pass,upr,lwr,digit,symbol);
    (checkPassword(pass,upr,lwr,digit,symbol))? cout << "Password is Strong" : cout << "Password is not Strong";
}
