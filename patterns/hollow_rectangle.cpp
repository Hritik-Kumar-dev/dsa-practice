#include <iostream>
using namespace std;

int main() {

    int n ,m; 
    cin>> n>>m ;
   
    for (int i = 1; i <=  n ; i++)
    {
        for (int j = m; j >= 1 ; j--)
        {
            if (i==1 || j==1|| i==n || j==m  )
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