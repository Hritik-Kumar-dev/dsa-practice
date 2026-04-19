#include <iostream>
using namespace std;

int main() {

    int n ;
    cin>> n  ;
    long long  arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ;
    }
    int max = arr[0] ; 
    int loc = 1; 
    for (int i = 0 ; i <n ; i++)
    {
        if (max < arr[i])
        {
             max = arr[i] ; 

             loc = i + 1  ; 
            }
        
    }
    
    cout<< max << " "<< loc ;

    return 0;
}