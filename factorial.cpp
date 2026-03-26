#include <iostream>
using namespace std;

int main() {

    int n ; 
    cin>> n ;
    int factorial =1;
    if (n>0 && n<=20)
    {
        /* code */
        
        for (int i = n; i >=1; i--)
        {
            factorial = factorial*i ; 
        }
    }
    cout<< factorial ;

    return 0;
}