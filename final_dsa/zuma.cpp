#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Node {
public:
    explicit Node(char c): color(c), prev(nullptr), next(nullptr) {}
    char color;
    Node* prev;
    Node* next;
};

class BallSet {
public:
    explicit BallSet(string s);
    ~BallSet();
    void add(int k, char b);
    string status();
private:
    Node* head;
    int count;
    void del(Node* p);
};

BallSet::BallSet(string s) {
    head = nullptr;
    count = 0;
    for (int i = 0; i < s.size(); i++) {
        add(i, s[i]);
    }
}

void BallSet::add(int k, char b) {
    // 把b作为节点插入到链表中的位置k
    // 扫描整个链表并统计颜色，发现大于等于3的删除节点和节点的两个前驱，hash表置0
    Node *node = new Node(b);
    Node *curr = head;
    if (!curr) {
        curr = node;
        head = curr;
    } else {
        int i = 1;
        while (i < k && curr->next != nullptr) {
            curr = curr->next;
            i++;
        }
        node->next = curr->next;
        node->prev = curr;
        curr->next->prev = node;
        curr->next = node;
    }
    count++;
}

string BallSet::status() {
    // 输出字符串，若为0输出'-'
    stringstream ss;
    Node *curr = head;
    while (curr != nullptr) {
        ss << curr->color;
        curr = curr->next;
    }
    return ss.str();
}

void BallSet::del(Node *p) {

}

BallSet::~BallSet() {
    Node *curr = head;
    Node *next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        delete curr;
        curr = next;
        count--;
    }
}

int main() {
    // accelerate cin and cout
    ios::sync_with_stdio(false);
    cin.tie(0);

    string balls;
    cin >> balls;
    BallSet ballSet = BallSet(balls);
    int n;
    cin >> n;

    int k;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> k >> c;
        ballSet.add(k, c);
        cout << ballSet.status() << endl;
    }

    return 0;
}
