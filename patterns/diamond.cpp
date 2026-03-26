#include <iostream>
using namespace std;

int main() {

    int n ; 
    cin>> n ;
    for (int i = 1; i <= n; i++)
    {

        
        for (int k = n-i; k >=1; k--)
        {
            cout<< " ";
        }


        for (int j = 1; j <= i; j++)
        {
            cout<< "*";
            if (j<i)cout<< " ";
            {
                /* code */
            }
            
        }
        cout<< "\n";
    }
    
    for (int i = n; i >= 1; i--)
    {

        
        for (int k = n-i; k >=1; k--)
        {
            cout<< " ";
        }

        
        for (int j = 1; j <= i-1; j++)
        {
            if (j<=i-1)cout<< " ";
            cout<< "*";
            {
                /* code */
            }
            
        }
        cout<< "\n";
    }

    return 0;
}