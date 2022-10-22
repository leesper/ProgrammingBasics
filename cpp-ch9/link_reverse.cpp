#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
class LinkedList {
    public:
    void push(T& e);
    void reverse();
    void print() const;
    private:
    vector<T> elements;
};

template<typename T>
void LinkedList<T>::push(T& e) { elements.push_back(e); }

template<typename T>
void LinkedList<T>::reverse() { std::reverse(elements.begin(), elements.end()); }

template<typename T>
void LinkedList<T>::print() const {
    for (auto& element : elements)
        cout << element << " ";
    cout << endl;
}

int main() {
    int m, n, num;
    double d;
    cin >> m >> n;
    LinkedList<int> integers;
    LinkedList<double> doubles;

    for (int i = 0; i < m; i++) {
        cin >> num;
        integers.push(num);
    }

    for (int i = 0; i < n; i++) {
        cin >> d;
        doubles.push(d);
    }

    integers.print();
    integers.reverse();
    integers.print();

    doubles.print();
    doubles.reverse();
    doubles.print();
    return 0;
}