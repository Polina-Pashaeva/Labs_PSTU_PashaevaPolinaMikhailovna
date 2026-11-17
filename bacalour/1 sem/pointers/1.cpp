#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    int a=10, b=20;
    int &r=a;
    r=b;
    r++;
    cout<<a<<' '<<b<<endl;
    return 0;
}