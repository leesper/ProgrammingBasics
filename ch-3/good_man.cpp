// 谁做的好事
#include <iostream>
#include <string>
using namespace std;

int main() {
    char good_man;
    char students[] = {'A', 'B', 'C', 'D'};
    int truths, lies;

    for (int i = 0; i < strlen(students); i++) {
        truths = 0, lies = 0;

        good_man = students[i];

        if (good_man != 'A') {
            truths++;
        } else {
            lies++;
        }

        if (good_man == 'C') {
            truths++;
        } else {
            lies++;
        }

        if (good_man == 'D') {
            truths++;
        } else {
            lies++;
        }

        if (good_man != 'D') {
            truths++;
        } else {
            lies++;
        }

        if (truths == 3 && lies == 1) {
            cout << good_man << " is the good man" << endl;
        }
    }

    return 0;
}

