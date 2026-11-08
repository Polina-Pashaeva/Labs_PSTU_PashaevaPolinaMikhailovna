#include <iostream> 
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[50];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n; i++){
        int y = a[i];
        int j = i - 1;
        bool flag = false;
        while (j >= 0 && !flag){
            if(a[j] > y){
                a[j+1] = a[j];
                j--;
            }else{
                flag = true;
            }
        }
        a[j+1] = y;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}