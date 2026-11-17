#include <iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    //int a[n]; — ошибка — статический массив
    int* m = new int[n]; // динамический массив

    int a[5];
    //Пробуем внести меньше/больше элементов в a и m
    for(int i=0; i<3; ++i) cin>>a[i];
    //Введём больше/меньше элементов в массив m
    for(int i=0; i<n+3; ++i) cin >> m[i];
    for(int i=0; i<n+3; ++i) cout<<m[i]<<" ";// либо выведется, либо мусорное значение
    cout<<endl;

    for(int i=0; i<n-3; ++i) cin >> m[i];
    for(int i=0; i<n; ++i) cout<<m[i]<<" ";//выведется часть массива и мусор
    cout<<endl;

    delete[] m;
    return 0;
}