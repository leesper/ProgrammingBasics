#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a, b, c, d, e;
    int as, bs, cs, ds, es;
    char rank[6];
    memset(rank, 0, sizeof(rank));
    for (a = 1; a <= 5; a++) {
        for (b = 1; b <= 5; b++) {
            if (a == b) continue;
            for (c = 1; c <= 5; c++) {
                if (a == c || b == c) continue;
                for (d = 1; d <= 5; d++) {
                    if (a == d || b == d || c == d) continue;
                    for (e = 1; e <= 5; e++) {
                        if (a == e || b == e || c == e || d == e) continue;
                        as = (b == 2) + (a == 3);
                        bs = (b == 2) + (e == 4);
                        cs = (c == 1) + (d == 2);
                        ds = (c == 5) + (d == 3);
                        es = (e == 4) + (a == 1);

                        if (as == 1 && bs == 1 && cs == 1 && ds == 1 && es == 1) {
                            rank[a] = 'A';
                            rank[b] = 'B';
                            rank[c] = 'C';
                            rank[d] = 'D';
                            rank[e] = 'E';
                        }
                    }
                }
            }
        }
    }
    
    for (int i = 1; i <= 5; i++) {
        cout << "rank " << i << ": " << rank[i] << endl;
    }
    return 0;
}