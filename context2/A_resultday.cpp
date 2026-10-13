#include <iostream>
using namespace std;

int main() {
    int n ; 
    cin >> n ;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int passingnum ;    
    cin >> passingnum ;
    int passcount = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= passingnum)
        {
            passcount++ ;
        }
    }
    cout << "Pass: "<< passcount << endl ;
    cout << "Fail: "<< (n - passcount)   << endl ;
    return 0;
}