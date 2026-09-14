#include<iostream>
using namespace std ;
int main(){
    int n ;
   cin >> n ;
   bool sorted = true ;
    int arr[n];
    for(int i = 0 ; i <n ; i++){
        cin >> arr[i];
        
    }
    for(int i =1 ; i<n ;i++){
        if(arr[i]<arr[i-1]){
            sorted = false ;
            break ;
        }
    }
    if(sorted){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}