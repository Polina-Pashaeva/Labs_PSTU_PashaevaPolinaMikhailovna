#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"UTF8");
    const double eps = 1e-4;
    double sum = 0.0, a = 0.1;
    int n = 1;
    
    while (std::fabs(a) >= eps) {
        sum += a;
        a = a * n / 10.0;
        n++;
    }

    cout<<"sum "<<sum<<endl;
    return 0;
}