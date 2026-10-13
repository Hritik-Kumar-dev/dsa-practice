#include <iostream>
using namespace std;

int main()
{
   long long int n;
    bool flag = false;
    cin >> n;
   long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n==1)
    {
        cout << "YES" << endl;
        return 0;
    }
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            flag = false;
            break;
            
        }else{
            flag = true ;
        }

    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

