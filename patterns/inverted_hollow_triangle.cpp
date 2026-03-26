// #include <iostream>
// using namespace std;

// int main() {

//     int n ; 
//     cin>> n ;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = n-i-1  ; k >= 0; k--)
//         {
//             cout<< " " ;
//         }
//         for (int j = 1 ; j <= i; j++)
//         {
//             if (i==1 || i==n || j==1 || j == i  )
//             {
              
//                 cout<< " *";
//             }
//             else{
//                 cout<< "  ";
//             }
            
//         }
        
//         cout<< "\n" ;
//     }
    

//     return 0;
// }
// //  expected: '    *', found: '      *'*

#include <iostream>
using namespace std;

int main() {

    int n ; 
    cin>> n ;
    for (int i = 1; i <=n; i++)
    {
        for (int k = n-i-1  ; k >= 0; k--)
        {
            cout<< " " ;
        }
        for (int j = 1 ; j <= i; j++)
        {
            if (i==1 || i==n || j==1 || j == i  )
            {
              
                cout<< " *";
            }
            else{
                cout<< "  ";
            }
            
        }
        
        cout<< "\n" ;
    }
    

    return 0;
}