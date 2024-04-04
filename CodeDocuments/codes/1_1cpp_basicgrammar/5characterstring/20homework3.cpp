#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    getline ( cin , s ) ;

    //实现思路；给定一个判定值，当遇到句中空格时开起跳过模式，遇正常符号时关闭
    bool del = false ;
    for ( char c : s ) 
    {
        if ( del && c == ' ' ) continue ;
        else if ( c == ' ' ) 
        {
            del = true ;
            cout << c ;
        }
        else
        {
            del = false ;
            cout << c ;
        }
    }

    return 0;
}