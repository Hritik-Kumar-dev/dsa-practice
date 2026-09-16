#include <iostream>
using namespace std;

int main() {

    int noofarray;
    cin >> noofarray;
    for (int i = 0; i < noofarray; i++)
    {
        /* code */
    
    


    int n ; 
    cin >> n;
    int arr[n];
    int zeros=0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]< 0|| arr[i]>1)
        {
            cout<<"only binary are allowed" <<endl ;
            break;
        }else if (arr[i]==0){
            zeros++ ;
        }
    }
     for (int i = 0; i < n; i++)
     {
         if(i<zeros){
            cout << 0<<" ";
         }else{

             cout << 1 <<" ";
            }
        }
        cout << endl;
     
    }
    
    return 0;
}