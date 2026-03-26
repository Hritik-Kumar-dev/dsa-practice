#include <iostream>
using namespace std;

int main() {

    long long int  input ; 
    cin>> input ;
    int zero= 0  ; 
    int  reverse= 0  ;    
    while (input!=0)
    {        
         reverse = (reverse * 10)  + input%10 ;          
         if (input%10 ==0)
         {           
             cout<< zero ;           
            }       
            input= input/10 ; 
    }
    cout<< reverse  <<endl;
    // cout<< result <<endl;

    return 0;
}