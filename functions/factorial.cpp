#include <iostream>
using namespace std;

 int factorial(long int n){
    int factorialcal = 1;
    if (n==0)
    {
        return factorialcal ;
    }else{
        factorialcal=n*factorial(n-1);
        return factorialcal ; 
    }                   
    
}

int main() {

    long int n ; 
    cin>> n ;
    if (n>0 && n<=20)
    {
        cout<< factorial(n);
    }else{
        cout<< "out of range " <<endl;
    }
    

    return 0;
}