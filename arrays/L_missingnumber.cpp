#include <iostream>
using namespace std;

int main() {
     
int ans = 0  ; 
 int times;
    cin >> times;
    for (int a = 0; a < times; a++)
    {
        
 int n ; 
 cin >> n ;
 int arr[n] ;
 for (int i = 0; i < n; i++){
    cin >> arr[i] ;
 }

for (int  i = 0; i < n; i++)
{
    int count = 1 ;
    for (int j = 0; j < n; j++)
    {
        if (i != j)
        {
            if (arr[i] == arr[j])
            {
                count++ ; 
            }
        }
        
    }
    if (count >= 2)
    {

        ans = arr[i] ;
    }
    
}


cout << ans << endl ;
    }
    
    return 0;
}