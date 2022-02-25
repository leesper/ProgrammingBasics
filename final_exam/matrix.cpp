//
// 矩阵查询
//
#include <iostream>
using namespace std;

int main() {
    int n, m, q;
    char op;
    int x1, y1, x2, y2;
    double d;

    cin >> n >> m;

    double** matrix = new double*[n + 1];
    for (int i = 0; i < n + 1; i++) {
        matrix[i] = new double[m + 1];
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            cin >> matrix[i][j];
        }
    }

    cin >> q;
    for (int k = 0; k < q; k++) {
        cin >> op;
        if (op == 'A') {
            cin >> x1 >> y1 >> x2 >> y2 >> d;
            for (int i = x1; i <= x2; i++) {
                for (int j = y1; j<= y2; j++) {
                    matrix[i][j] += d;
                }
            }
        } else if (op == 'E') {
            cin >> x1 >> x2;
            long temp;
            for (int j = 1; j < m + 1; j++) {
                temp = matrix[x1][j];
                matrix[x1][j] = matrix[x2][j];
                matrix[x2][j] = temp;
            }
        } else if (op == 'Q') {
            cin >> x1 >> y1;
            cout << matrix[x1][y1] << endl;
        }
    }
    cout << endl;

    for (int i = 0; i < n + 1; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
