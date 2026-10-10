#include <iostream>
using namespace std;

int main() {
int times ; 
cin >> times;
for (int d = 0; d < times; d++)
{
    
    
        int n ; 
        cin >> n ;
        int array[n] ;  
        for (int  i = 1 ; i <= n; i++){
            cin >> array[i] ;
        }
        for (int i = 1 ; i < n; i+=2){  
         swap(array[i], array[i+1]);
        }
       for (int i = 1 ; i <= n; i++){
            cout << array[i] << " ";
        }   
        cout<< endl;
    /* code */
}
    
    return 0;
}
