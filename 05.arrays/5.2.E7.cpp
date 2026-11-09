#include <iostream>
#include <string>
using namespace std;
#define N 3

struct Score {
    string id;
    int japanese;
    int math;
    int english;
};

int main() {
    cout << unitbuf << boolalpha;
    Score scores[N];
    string line;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        scores[i].id = line;
        getline(cin, line);
        scores[i].japanese = stoi(line);
        getline(cin, line);
        scores[i].math = stoi(line);
        getline(cin, line);
        scores[i].english = stoi(line);
    }
    cout << "---\n";
    int max_total = scores[0].japanese + scores[0].math + scores[0].english;
    for (int i = 1; i < N; i++) {
        int total = scores[i].japanese + scores[i].math + scores[i].english;
        if (total > max_total) {
            max_total = total;
        }
    }
    for (int i = 0; i < N; i++) {
        int total = scores[i].japanese + scores[i].math + scores[i].english;
        if (total == max_total) {
            cout << scores[i].id << "\n";
        }
    }
    return 0;
}
