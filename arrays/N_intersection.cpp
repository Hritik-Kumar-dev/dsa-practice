#include <iostream>
using namespace std;

int main() {
    int times ; 
    cin >> times ;
    for (int a = 0; a < times; a++){
        int n ; 
        cin >> n ;
        int arr[n] ;
        for (int i = 0; i < n; i++){
            cin >> arr[i] ;
        }
        int m ; 
        cin >> m ;
        int arr2[m] ;
        int used[m] = {};
    for (int i = 0; i < m; i++){
        cin >> arr2[i] ;
    }


   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {
        
        if (arr[i] == arr2[j] && !used[j])
        {
            cout << arr[i] << " " ;
            used[j] = 1;
            break;
        }
    }
   }
cout << endl ;
  }
    return 0;
}


