#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int a[50];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++){
        int min = a[i];
        for (int j = i; j < n; j++){
            if (a[j] < min){
                min = a[j];
                k = j;
            }
        }
        a[k] = a[i];
        a[i] = min;
    }
     for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}