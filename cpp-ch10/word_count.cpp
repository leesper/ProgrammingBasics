#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> wordCount;
    string word;
    while (cin >> word) {
        if (word == "QUIT") {
            break;
        }
            
        cout << wordCount[word] << endl;
        if (wordCount.find(word) != wordCount.end()) {
            wordCount[word]++;
        } else {
            wordCount[word] = 1;
        }
    }
    return 0;
}