#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL,".65001");
    double a=0.1;
    double b=1.0;
    int k=10;
    double step=(b-a)/k;

    int n=10; 
    double eps=0.0001; 
    
    for (double x=a; x<=b+1e-9; x+=step) 
    {
        double ex=(exp(x)+exp(-x))/2;
        double sum_a=1.0;
        double cur_a=1.0; 
        for (int i=1; i<=n; ++i) 
        {
            cur_a*=pow(x,2)/((2*i-1)*(2*i));
            sum_a+=cur_a;
        }
        double sum_b=1.0;
        double cur_b=1.0;
        int i=1;
        do {
            cur_b*=pow(x,2)/((2*i-1)*(2*i));
            sum_b+=cur_b;
            i++;
        } while(abs(cur_b)>=eps);
        
        cout<<"x= "<<x<<endl;
        cout<<"Точное значение: "<<ex<<endl;
        cout<<"Сумма (n=10):"<<sum_a<<endl;
        cout<<"Сумма (eps):"<<sum_b<<endl;
    }
    return 0;
}