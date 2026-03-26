#include <iostream>
using namespace std;

int main() {

    int n   ,b ; 
    cin>> n >>b;
    for (int i = 0; i < n; i++)
    {
        for (int i = b; i >0; i--)
        {
            /* code */
            cout<< "*";
        }
        cout<< "\n";
    }
    

    return 0;
}