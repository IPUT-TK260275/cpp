#include <iostream>
#include <string>
using namespace std;
#define N 5
int max(int* ms, int length);
void square_all(int* ms, int length);
void print_all(int* ms, int length);
int max(int* ms, int length) {
    if (length == 0) { return 0; }
    int max0 = ms[0];
    for (int i = 1; i < length; i++) {
        if (ms[i] > max0) { max0 = ms[i]; }
    }
    return max0;
}
void square_all(int* ms, int length) {
    for (int i = 0; i < length; i++) {
        ms[i] = ms[i] * ms[i];
        // *(ms + i) = ms[i] * ms[i]; と書いても同じ意味です。
    }
}
void print_all(int* ms, int length) {
    for (int i = 0; i < length; i++) {
        cout << i << ": " << ms[i] << "\n";
    }
}
int main() {
    int ns[N] = {20, 40, 0, 30, 10};
    print_all(ns, N);
    cout << "max: " << max(ns, N) << "\n";
    square_all(ns, N);
    print_all(ns, N);
}
