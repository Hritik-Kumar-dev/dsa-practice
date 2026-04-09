#include <iostream>
using namespace std;

void hcf(int a , int b ){
    for (int i = a; i >= 1; i--)
    {
       if (a%i==0 && b%i==0)
       {
         cout<< i <<endl;
         break;
       }
       
    }
    
}

int main() {

    int a , b ; 
    cin>> a >>b  ;

    if (a<b)
    {
        hcf(a,b);
    }else
    {
        hcf(b,a);
    }
    
    
    return 0;
}