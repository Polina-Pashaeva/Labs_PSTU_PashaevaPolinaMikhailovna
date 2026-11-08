#include <iostream>
#include <clocale>
using namespace std;

const int maxn = 100;   
const int maxm = 100;   

void inputA(int a[][maxm], int n, int m) 
{
    cout<<"Введите элементы массива ("<<n<<" x "<<m<<"):"<<endl;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin>>a[i][j];
}

void printA(int a[][maxm], int n, int m) 
{
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<m; j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
}

int blockSum(int a[][maxm], int i, int j) 
{
    int s=0;
    for (int di=0; di<3; di++)
        for (int dj=0; dj<3; dj++)
            s+=a[i+di][j+dj];
    return s;
}

int findMax3x3(int a[][maxm], int n, int m, int &bestI, int &bestJ) 
{
    int best=blockSum(a, 0, 0);
    bestI=0;
    bestJ=0;

    for(int i=0; i+3<=n; i++) 
    {
        for(int j=0; j+3<=m; j++) 
        {
            int s=blockSum(a, i, j);
            if(s>best) 
            {
                best=s;
                bestI=i;
                bestJ=j;
            }
        }
    }
    return best;
}

void printmatrix(int a[][maxm], int bi, int bj) 
{
    cout<<"\nПодмассив 3x3:\n";
    for(int i=bi; i<bi+3; i++) 
    {
        for(int j=bj; j<bj+3; j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
}

int main() 
{
    setlocale(LC_ALL,".65001");
    int n, m;
    cout<<"Введите N и M: ";
    cin>>n>>m;
    if (n<3 || m<3) 
    {
        cout<<"Ошибка: размеры должны быть не меньше 3x3!"<<endl;
        return 1;
    }
    if (n>maxn || m>maxm) {
        cout<<"Ошибка: слишком большой размер (макс "<<maxn<<"x"<<maxm<<")"<<endl;
        return 1;
    }
    int a[maxn][maxm];
    inputA(a, n, m);
    cout<<"\nИсходный массив:\n";
    printA(a, n, m);
    int bi, bj;
    int bestSum=findMax3x3(a, n, m, bi, bj);
    cout<<"\nМаксимальная сумма: "<<bestSum<<"\n";
    cout<<"Левый верхний угол: ("<<bi<<", "<<bj<<")\n";
    printmatrix(a, bi, bj);
    return 0;
}