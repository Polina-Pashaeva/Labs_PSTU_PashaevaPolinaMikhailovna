#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int *arr=new int[size];
    for(int i=0; i<size; i++)
    {
        arr[i]=rand()%100+1;
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    delete[] arr;
    return 0;
}