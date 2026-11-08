#include <iostream>
#include <clocale>
using namespace std;

//а)Среднее арифметическое для массива целых чисел
double SredAr(int arr[], int size) 
{
    if(size==0) return 0;
    long long sum=0;
    for (int i=0; i<size; i++) 
    {
        sum+=arr[i];
    }
    return static_cast <double> (sum)/size;
}

int main() 
{
    setlocale(LC_ALL, ".65001");
    //а)
    int n;
    cout<<"Введи количество элеметнов массива"<<endl;
    cin>>n;
    int* a=new int[n];
    cout<<"введите "<<n<<" чисел"<<endl;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    cout<<"Среднее арифметическое массива: "<<SredAr(a, n)<<endl;
    delete[] a;
    return 0;
}