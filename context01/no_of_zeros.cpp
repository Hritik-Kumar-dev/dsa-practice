#include <iostream>
using namespace std;

int main() {

   int n ; 
   cin>> n ;
int count =0; 
   int lastdigit = 0 ; 
   while (n!=0)
   {
    lastdigit= lastdigit*10 + n%10 ; 
     n=n/10;
    
     if (lastdigit%10==0)
     {
        count++ ;
     }
     
   }
   
cout<< count <<endl;

    return 0;
}