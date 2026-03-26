#include <iostream>

using namespace std;

int main() {

    long long result =  1  ; 
    int  x, n ;
    cin>>x>>n   ;
    if (x<-10 || x>10 || n<0 ||n>20  ){
    }
    else{
        for (int  i = 0; i < n; i++)
        {
         result *=  x ;   
    }
    
        cout<< result<<endl;
    
}

    return 0;   
}