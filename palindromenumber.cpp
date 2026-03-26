#include <iostream>
using namespace std;

int main() {

    long long int  input ; 
    cin>> input ;
   int temp = input ;  
    int  reverse= 0  ;    
    while (input!=0)
    {        
         reverse = (reverse * 10)  + input%10 ;          
         
            input= input/10 ; 
    }
    // cout<< reverse  <<endl;
    // cout<< result <<endl;
if (reverse ==temp )
{
    cout<< "YES" <<endl;
}
else
{
    cout<< "NO" <<endl;
}


    return 0;
}