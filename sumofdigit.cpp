#include <iostream>
using namespace std;

int main() {

    long long int  input ; 
    cin>> input ;
 
    int  sumofdigit= 0  ;    
    while (input!=0)
    {        
         sumofdigit += input%10 ;                
            input= input/10 ;          
        }
    cout<< sumofdigit  <<endl;
    return 0;
}