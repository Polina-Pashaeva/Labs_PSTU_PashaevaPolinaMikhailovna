#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".65001");
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cout<<'*';
    }
    cout<<endl;
    for(int i=3; i<=n; ++i)
    {
        cout<<'*';
        for(int j=1; j<=(n-2);++j)
        {
            cout<<' ';
        }
        cout<<'*'<<endl;
    }
    for(int i=1; i<=n; ++i)
    {
        cout<<'*';
    }
    return 0;
}