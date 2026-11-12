#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL,".65001");
    string s;
    cout<<"Введите текст с точкой в конце: ";
    getline(cin, s);

    int l=s.length();
    for (int i=0; i<l; i++) 
    {
        if (s[i]=='.') {
            s=s.substr(0, i);
            l=i;
            break;
        }
    }

    string w[128];
    int k=0; 

    int i=0;
    while(i<l) 
    {
        while(i<l && s[i]==' ') i++;
        if(i>=l) break;

        int start=i;
        while(i<l && s[i]!=' ') i++;
        w[k]=s.substr(start, i-start);
        k++;
    }

    bool f=false;
    cout<<"Слова, встречающиеся по одному разу:"<<endl;

    for(int a=0; a<k; a++) 
    {
        int cnt=0;
        for(int b=0; b<k; b++) 
        {
            if(w[a]==w[b]) cnt++;
        }
        if (cnt==1) 
        {
            cout<<w[a]<<endl;
            f=true;
        }
    }

    if(!f) cout<<"(нет таких слов)"<<endl;
    return 0;
}