#include <iostream>
using namespace std;

int main() {

     int n  ; 
    cin>> n ;
    int target ; 
    cin>> target  ;
     long long arr[n] ;
     bool flag = 0 ;
     
     for (int i = 0; i < n; i++)
     {
        cin>> arr[i] ;
     }
     
     for (int  i = 0; i < n; i++)
     {
        if (arr[i]==target)
        {
            flag = 1 ; 
        }
     }
     (flag)?cout<< "YES" <<endl: cout<< "NO" <<endl;
     

    return 0;
}