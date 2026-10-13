// #include <iostream>
// using namespace std;

// int factorialrecursion(long long int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorialrecursion(n - 1);
//     }
// }
// int main() {
//     long long   int a,b;

//     cin >> a >> b;
//    long long int fact1 = 1;
//    fact1 = factorialrecursion(a);
//    long long int fact2 = 1;
//     fact2 = factorialrecursion(b);
//     if (fact1 == fact2) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    long long int a,b;
    cin >> a >> b;
    if (a == b || (a == 0 && b == 1) || (a == 1 && b == 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}