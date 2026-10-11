#include <iostream>
using namespace std;

int main() {
   int times ;
   cin >> times ;
   for (int a = 0; a < times; a++){
     int n ;
    cin >> n ;
    int arr[n] ;
    int count = 0 ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    
    int target ;
    cin >> target ;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] + arr[j] == target)
                {
                   count++ ;
                }
            }
            
        }
    }
    cout << count << endl ;
   }
    return 0;
}