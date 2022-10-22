#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
    T list[MAX + 1];
    int top;
public:
    Stack();
    void push(const T &item);//将item压栈
    T pop();//将栈顶元素弹出栈
    const T & peek() const;//访问栈顶元素
    bool isEmpty() const;//判断是否栈空
};

template<typename T, int MAX>
Stack<T, MAX>::Stack(): top(-1) {}

template<typename T, int MAX>
void Stack<T, MAX>::push(const T &item) {
    list[++top] = item;
}

template<typename T, int MAX>
T Stack<T, MAX>::pop() {
    return list[top--];
}

template<typename T, int MAX>
const T& Stack<T, MAX>::peek() const {
    return list[top];
}

template<typename T, int MAX>
bool Stack<T, MAX>::isEmpty() const {
    return top == -1;
}

string match(string exp);
int main() {
    string expression;
    cin >> expression;
    cout << match(expression) << endl;
    return 0;
}

string match(string exp) {
    string ans;
    Stack<char> charsStack;
    for (int i = 0; i < exp.length(); i++) {
        if ('(' == exp[i]) {
            charsStack.push(exp[i]);
        } else if (')' == exp[i]) {
            if (charsStack.isEmpty()) {
                ans = "No";
                return ans;
            } else {
                charsStack.pop();
            }
        }
    }

    if (charsStack.isEmpty()) {
        ans = "Yes";
    } else {
        ans = "No";
    }

    return ans;
}

