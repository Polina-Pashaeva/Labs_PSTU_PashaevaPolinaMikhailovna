#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".65001");
    int a,b;
    bool f=true;
    cin>>a;
    if(a!=0)
    {
        cin>>b;
        f=(a<b)&&f;
        while((b!=0)&&f);
        {
            f=(a<b)&&f;
            if(f)
            {
                a=b;
                cin>>b;
            }
        }
        if(f) cout<<"условие выполнилось";
        else cout<<"условие не выполнилось";
    }
    else cout<<"нет элементов";
}