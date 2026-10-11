#include <iostream> //библиотека для управления ввода/вывода
using namespace std; //пространство имён std
int main()
{
    int n,m; //вводим переменные с типом int
    cout << "Enter n and m: "; //выводим сообщение
    cin >> n >> m; //вводим значения переменных
    cout << "1)" << (n-- - m) << endl;
    cout << "2)" << (m-- < n) << endl;
    cout << "3)" << (n++ > m) << endl;
}