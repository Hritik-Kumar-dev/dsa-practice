#include <iostream>
using namespace std;

int main() {
int times ; 
cin >> times;
for (int d = 0; d < times; d++)
{
    
    
        int n ; 
        cin >> n ;
        int i , j ; 
        for (int  i = 1 ; i <= n; i++){
            if (i % 2 !=0){
                cout << i << " ";
            }
            
        }
        for (int j = n ; j >=1; j--){
            if (j % 2 == 0){
                cout << j << " ";
            }
            
        }
        cout<< endl;
    /* code */
}
    
    return 0;
}
