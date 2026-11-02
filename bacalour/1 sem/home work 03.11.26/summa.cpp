#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, i = 1, j = 1, count = 1, sum = 0;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = i; j <= i * 2; ++j) {
            count *= j;
        }
        sum += count;
        count = 1;
    }
    cout << sum;
    return 0;
}