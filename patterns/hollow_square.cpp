#include <iostream>
using namespace std;

int main() {

    int n ; 
    cin>> n ;
    int i , j ; 
    for (int i = 1; i <=  n ; i++)
    {
        for (int j = n; j >= 1 ; j--)
        {
            if (i==1 || j==1|| i==n || j==n  )
            {
                cout<< "*" ;
            }else
            {
                cout<< " ";
            }
            
            
        }
        cout<< "\n";
    }
    

    return 0;
}