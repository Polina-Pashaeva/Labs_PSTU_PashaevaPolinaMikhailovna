#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".65001");
    int size;
    cin>>size;
    int *arr=new int[size];
    int *ptr=arr;
    for(int i=0; i<size; i++)
    {
        cin>>*(ptr+i);
    }
    ptr=arr;
    while(ptr<arr+size) 
    {
        if(*ptr%2==0) 
        {
            if(ptr==arr) *ptr=0;
            else if(ptr==arr+size+1) *ptr=0;
            else *ptr=*(ptr-1)+*(ptr+1);
        }
        ++ptr;
    }
    for(ptr=arr;ptr<arr+size;++ptr)
    {
        cout<<*ptr<<' ';
    }
    cout<<endl;
    delete[] arr;
    return 0;
}