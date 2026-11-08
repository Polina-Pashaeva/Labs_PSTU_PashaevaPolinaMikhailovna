#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int a[50];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++){
        for (int j = n - 1; j > i; j--){
            if (a[j-1]  > a[j]){
                int m = a[j];
                a[j] = a[j-1];
                a[j-1] = m;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}