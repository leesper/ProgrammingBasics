#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < (2 * (n - i)) / 2; k++)
            cout << " ";

        for (int k = 0; k < 2 * i - 1; k++)
            cout << "*";
        
        for (int k = 0; k < (2 * (n - i)) / 2; k++)
            cout << " ";
        
        cout << endl;
    }
    for (int j = n-1; j >= 1; j--) {
        for (int k = 0; k < (2 * (n - j)) / 2; k++)
            cout << " ";

        for (int k = 0; k < 2 * j - 1; k++) 
            cout << "*";

        for (int k = 0; k < (2 * (n - j)) / 2; k++)
            cout << " ";

        cout << endl;
    }
    return 0;
}