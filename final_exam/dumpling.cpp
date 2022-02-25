//
// 擀面皮
//
#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int** h_tab = new int*[n + 1];
    for (int i = 1; i <= n; i++) {
        h_tab[i] = new int[m + 1];
        for (int j = 1; j <= m; j++) {
            cin >> h_tab[i][j];
        }
    }

    int** v_tab = new int*[n + 1];
    for (int i = 1; i <= n; i++) {
        v_tab[i] = new int[m + 1];
        for (int j = 1; j <= m; j++) {
            cin >> v_tab[i][j];
        }
    }

    int** m_tab = new int*[n + 1];
    for (int i = 1; i <= n; i++) {
        m_tab[i] = new int[m + 1];
    }

    m_tab[1][1] = 0;
    for (int i = 2; i <= n; i++) {
        m_tab[i][1] = m_tab[i-1][1] + v_tab[i-1][1];
    }

    for (int j = 2; j <= m; j++) {
        m_tab[1][j] = m_tab[1][j-1] + h_tab[1][j-1];
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            int from_h = m_tab[i][j-1] + h_tab[i][j-1];
            int from_v = m_tab[i-1][j] + v_tab[i-1][j];
            m_tab[i][j] = from_h > from_v ? from_h : from_v;
        }
    }

    cout << m_tab[n][m];

    for (int i = 1; i <= n; i++) {
        delete[] h_tab[i];
        delete[] v_tab[i];
        delete[] m_tab[i];
    }
    delete[] h_tab;
    delete[] v_tab;
    delete[] m_tab;

    return 0;
}
