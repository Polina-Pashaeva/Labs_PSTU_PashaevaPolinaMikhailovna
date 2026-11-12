#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL,".65001");
    int n;
    cout<<"Введите количество строк: ";
    cin>>n;
    cin.ignore();
    if(n<=0) 
    {
        cout<<"Некорректное количество строк!" << endl;
        return 1;
    }
    
    string* a=new string[n];
    
    cout<<"Введите строки:"<<endl;
    for(int i=0; i<n; i++) 
    {
        cout<<"Строка "<<i+1<<": ";
        getline(cin, a[i]);
    }
    
    cout<<"\nИсходный массив строк:"<<endl;
    for(int i=0; i<n; i++) 
    {
        cout<<i+1<<". \""<<a[i]<<"\"(длина: "<<a[i].length()<<")"<<endl;
    }
    int max=0;
    for (int i=1; i<n; i++) 
    {
        if(a[i].length()>a[max].length()) max = i;
    }
    cout<<"\nСамая длинная строка: \""<<a[max]<<"\" (индекс "<<max<<", длина "<<a[max].length()<<")"<<endl;
    for (int i=max; i<n-1; i++) 
    {
        a[i]=a[i+1];
    }
    n--;
    cout<<"\nМассив после удаления самой длинной строки:"<<endl;
    if(n==0) cout<<"(массив пуст)"<<endl;
    else 
    {
        for(int i=0; i<n; i++) 
        {
            cout<<i+1<<". \""<<a[i]<<"\""<<endl;
        }
    }
    delete[] a;
    return 0;
}