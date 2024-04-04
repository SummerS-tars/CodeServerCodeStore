#include <iostream>

using namespace std;

int main()
{
    string str1 , str2 , str3 ;//此处直接改为a , b , c 也可
    
    cin >> str1 >> str2 >> str3 ;

    if ( str1 ==string("vertebrado"))
    {
        if ( str2 ==string("ave"))
        {
            if ( str3 ==string("carnivoro")) cout << "aguia" << endl ;
            else cout << "pomba" << endl ;
        }
        else 
        {
            if ( str3 ==string("onivoro")) cout << "homem" << endl ;
            else cout << "vaca" << endl ;
        }
    }
    else
    {
        if ( str2 ==string("inseto")) 
        {
            if ( str3 ==string("hematofago")) cout << "pulga" << endl ;
            else cout << "lagarta" << endl;
        }
        else 
        {
            if ( str3 ==string("hematofago")) cout << "sanguessuga" << endl ;
            else cout << "minhoca" << endl ;
        }
    }
    return 0;
}