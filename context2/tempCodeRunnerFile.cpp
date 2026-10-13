#include <iostream>
using namespace std;

int main()
{
    int n;
    bool flag = false;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            flag = true;
            
        }else{
            flag = false ;
        }

    }
    if (flag == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}