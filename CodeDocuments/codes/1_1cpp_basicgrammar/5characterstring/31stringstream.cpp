#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s ;
    getline ( cin , s ) ;
    //最好再仔细了解一下此处cin再getline中的意义

    stringstream ssin ( s ) ;

    int a , b ;
    string str;
    float c ;

    ssin >> a >> b >> str >> c ;
    //相当于输入源为s的cin，等价的

    cout << s << endl ;
    cout << a << ' ' << b << ' ' << str << ' ' << c << endl ;

    return 0;
}