#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL,".65001");
    const int m=100;
    int a[m];
    int size=0;

    int ring[]={10, 20, 30, 40, 50, 60};
    for (int v : ring)
        a[size++]=v;

    int K;
    cout<<"Введите K (индекс стартового элемента): ";
    cin>>K;

    cout<<"\nИсходное кольцо\n";
    cout<<"Массив: ";
    for(int i=0; i<size; ++i)
        cout << a[i] << " ";
    cout << endl;

    int n=size;
    int kk=((K%n)+n)%n;
    cout<<"Влево от K=" <<kk<<" (" << n << " эл.): ";
    for (int i=0; i<n; ++i) 
    {
        int idx=((kk-i)%n+n)%n;
        cout<<a[idx]<<" ";
    }
    cout<<endl;

    int fe, le;
    cout<<"\nВведите значение для добавления в начало кольца: ";
    cin>>fe;
    cout<<"Введите значение для добавления в конец кольца: ";
    cin>>le;
    if (size<m) a[size++]=le;
    if (size<m) 
    {
        for (int i=size; i>0; --i)
            a[i]=a[i-1];
        a[0]=fe;
        size++;
    }

    cout<<"\nПосле добавления\n";
    cout<<"Массив: ";
    for(int i=0; i<size; ++i)
        cout<<a[i]<<" ";
    cout<<endl;

    n=size;
    kk=((K%n)+n)%n;
    cout<<"Вправо от K="<<kk<<" ("<<n<<" эл.): ";
    for(int i=0; i<n; ++i) 
    {
        int idx=(kk+i)%n;
        cout<<a[idx]<<" ";
    }
    cout<<endl;

    return 0;
}