// A number x is said to be good if:
//                         x  is a factor of 18  (i.e., 18modx=0 ), or x is a multiple of 45(i.e., xmod45=0).

#include <iostream>
using namespace std;

int main() {

    int n ; 
    cin>> n  ;
    int count = 0 ;
    for (int i = 0; i < n; i++)
    {int num ; 
        cin>> num ;
        
        
                if ( (num!=0  &&   18%num==0 )|| num%45==0)
                {
                    count++;
                }
        
    }
    cout<< count <<endl;

    return 0;
}