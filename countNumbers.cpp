#include <iostream>
using namespace std;

int main() {

    int n , input ; 
   
    cin>> n ;
int positive=0 , negative=0 , even=0 ,odd  = 0 ; 

    for (int i = 0; i < n; i++)
    {
        cin>>input ;
        if (input >0 )
        {
            if (input % 2 ==0)
            {
                even ++ ;
            }else
            {
                odd++ ; 
            }
            
            
            positive ++ ;
        }else if (input <0 )
        {
            if (input % 2 ==0)
            {
                even ++ ;
            }else
            {
                odd++ ; 
            }
            
            
            negative ++ ;
        }else if (input == 0)
        {
            even ++ ;
        }
        
        
        
    }
    
    cout<< positive  <<endl;
    cout<< negative  <<endl;
    cout<< even  <<endl;
    cout<< odd  <<endl;

    return 0;
}