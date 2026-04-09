#include <iostream>
using namespace std;

void countzero(long long int n ){
    int count=0;

    while (n>0)
    {   
        if (n%10==0)
        {
            count++;
            
        }
        n=n/10;

        
    }
    cout<< count <<endl; ; 
}

int main() {

    long long int n ; 
    cin>> n  ;
if (n==0)
{
    cout<< 1 <<endl;
}else
{
    countzero(n);
}


    return 0;
}