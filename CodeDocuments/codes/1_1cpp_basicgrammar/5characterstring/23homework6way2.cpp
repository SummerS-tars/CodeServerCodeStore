#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s , a , b ;

    getline ( cin , s ) ;
    cin >> a >> b ;

    stringstream ssin ( s ) ;
    /*把s初始化为"字符串流"
    之后就可以当成cin使用，只是其输入来自s
    详见31*/
    string str ;
    while ( ssin >> str ) 
        if ( str == a ) cout << b << ' ' ;
        else cout << str << ' ' ;

    return 0;
}