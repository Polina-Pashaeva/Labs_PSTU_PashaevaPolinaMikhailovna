#include <iostream> //библиотека для управления ввода/вывода
using namespace std; //пространство имён std
#include <cmath> //библиотека для возведения в степень
int main(){
    double a = 1000, b = 0.0001; //переменные double
    double c; //переменная для итогового результата с типом double
    c= (pow((a-b),4)-(pow(a,4)-4*pow(a,3)*b+6*sqrt(a)*sqrt(b)))/(pow(b,4)-4*a*pow(b,3));
    std::cout << c; //выводим значение с типом double
    return 0;
}