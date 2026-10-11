#include <iostream>
using namespace std;

int main()
{
    int times;
    cin >> times;
    for (int a = 0; a < times; a++)
    {
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int target;
        cin >> target;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (i != j && j != k && i != k)
                    {
                        for (int l = k + 1; l < n; l++)
                        {
                            if (i != j && j != k && k != l && i != l){
                                if (arr[i] - 2 * arr[j] + 3 * arr[k] - 4 * arr[l] == target){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
            cout << count << endl;
        }
        return 0;
    }