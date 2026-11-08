#include <iostream>
#include <string>
#include <clocale>
using namespace std;

//б)Количество букв в строке
int countLetters(const string& s) 
{
    int count=0;
    for (size_t i=0; i<s.size(); i++) 
    {
        unsigned char c=s[i];
        //Латиница
        if((c>='A' && c<='Z')||(c>='a' && c<='z')) 
        {
            count++;
        }
        //Кириллица в Windows-1251
        else if(c>=192 && c<=255) 
        {
            count++;
        }
        //Кириллица Ё/ё в Windows-1251
        else if(c==168 || c==184) 
        {
            count++;
        }
    }
    return count;
}

int main()
{
    setlocale(LC_ALL,".65001");
     //б)
    string s;
    cout<<"Введи строку"<<endl;
    getline(cin,s);
    cout<<"Количество букв в строке: "<<countLetters(s)<<endl;
}