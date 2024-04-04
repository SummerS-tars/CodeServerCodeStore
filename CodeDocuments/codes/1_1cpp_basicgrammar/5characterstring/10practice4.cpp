#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;

    getline ( cin , s ) ;
    //string类对象不能用fgets，因为fgets第一个空只可读入char类型

    for ( int i = 0 ; i < s.size() ; i ++ )
    {
        s [ i ] = ( s [ i ] - 'a' + 1 ) % 26 + 'a' ;
        //取模循环

        cout << s [ i ] ;
    }

    return 0;
}