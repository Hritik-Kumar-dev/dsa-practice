#include <iostream>
using namespace std;

int main() {

    int n ; 
    cin>> n ;


    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< "*";
        }
        
            for (int k = n-i; k >=0; k--)
            {
                cout<< " ";
            }
            
            for (int k = n-i; k > 0; k--)
            {
                cout<< " ";
            }
            
        for (int j = 1; j <= i; j++)
        {
            cout<< "*";
        }
        
        cout<< "\n";
    } 
    
    // lower half 

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< "*";
        }
            for (int k = n-i; k >= 0; k--)
            {
                cout<< " ";
            }
            for (int k = n-i; k > 0; k--)
            {
                cout<< " ";
            }
        for (int j = 1; j <= i; j++)
        {
            cout<< "*";
        }
        
        cout<< "\n";
    }


    return 0;
}