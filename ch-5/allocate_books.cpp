//
// 分书问题
//

#include <iostream>
using namespace std;

void allocate_books(int person, int** like, int* books, int n);
int main() {
    int n;
    cin >> n;

    int** like;
    int* books;

    like = new int*[n];
    for (int i = 0; i < n; i++)
        like[i] = new int[n];

    books = new int[n];

    for (int i = 0; i < n; i++)
        books[i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> like[i][j];
        }
    }

    allocate_books(0, like, books, n);

    delete[] books;

    for (int i = 0; i < n; i++)
        delete[] like[i];
    delete[] like;
}

void allocate_books(int person, int** like, int* books, int n) {
    if (person >= n) {
        for (int i = 0; i < n; i++) {
            cout << books[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int j = 0; j < n; j++) {
        if (like[person][j] == 1 && books[j] == 0) {
            books[j] = person + 1;
            allocate_books(person + 1, like, books, n);
            books[j] = 0; // backtracking to restore
        }
    }

}