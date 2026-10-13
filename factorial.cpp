#include <iostream>
using namespace std;

int factorial (int n ) {
    int factl =1;
    if (n>0 )
    {
        /* code */
        
        for (int i = n; i >=1; i--)
        {
            factl = factl*i ; 
        }
    }
    return  factl ;
}

int aCb (int a , int b  ) {
    
    return  factorial(a)/(factorial(a) * factorial(a-b)) ; 
}
int main() {

    int a , b ; 
cin >> a>>b ;

cout << aCb(a,b);
    return 0;
}