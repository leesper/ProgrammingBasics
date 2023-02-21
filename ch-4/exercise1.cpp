#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int aTruths, bTruths, cTruths;
    int aAns, bAns, cAns;

    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <=3; c++) {
                aTruths = (a < b) + (a == c);
                bTruths = (b < a) + (c < a);
                cTruths = (b < c) + (a < b);

                if (!(a <= b && aTruths <= bTruths || 
                b <= c && bTruths <= cTruths || 
                a <= c && aTruths <= cTruths || 
                b <= a && bTruths <= aTruths || 
                c <= b && cTruths <= bTruths || 
                c <= a && cTruths <= aTruths)) {
                    aAns = a;
                    bAns = b;
                    cAns = c;
                }
            }
        }
    }
    
    if (aAns <= bAns && bAns <= cAns) {
        cout << "C B A" << endl;
    }

    if (cAns <= bAns && bAns <= aAns) {
        cout << "A B C" << endl;
    }

    if (aAns <= cAns && cAns <= bAns) {
        cout << "B C A" << endl;
    }

    if (bAns <= aAns && aAns <= cAns) {
        cout << "C A B" << endl;
    }

    if (bAns <= cAns && cAns <= aAns) {
        cout << "A C B" << endl;
    }

    if (cAns <= aAns && aAns <= bAns) {
        cout << "B A C" << endl;
    }

    return 0;
}