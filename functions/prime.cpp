#include <iostream>
using namespace std;


void factor(int n){
    int count=0 ; 
for (int i = n; i >= 1; i--)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    if(count==2){
        cout<< " Prime" <<endl;
    }else{
        cout<< "not prime " <<endl;
    }
    cout<< "\n";
    
}
int main() {

    int n ; 
    cin>> n ;
factor(n);

    return 0;
}