#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = 0;
for (int i = 1; i <= n; i++)
{
    if (n % i == 0 && (i%10 == 2 || i%10 == 7))
    {
        cout << i << " ";
        flag = 1;
        
    }
}

if (flag == 0)
{
    cout << -1 << endl; 
}
    return 0;
}