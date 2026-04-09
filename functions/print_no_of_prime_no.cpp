#include <iostream>
using namespace std;


bool isprime(int n){
    int count=0 ; 
for (int i = n; i >= 1; i--)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    if(count==2){
        return 1 ;
    }else{
       return 0 ; 
    }
   
    
}
void  printprime(int n ){
    for (int  i = 1; i <= n; i++)
    {
        if (isprime(i))
        {
            cout<< i <<" ";
        }
        
    }
    
}

int main() {

    int n ; 
    cin>> n ;

printprime(n);

    return 0;
}