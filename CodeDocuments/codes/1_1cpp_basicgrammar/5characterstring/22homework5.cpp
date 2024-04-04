#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a , b ;
    getline ( cin , a ) ;

    for ( int i = 0 ; i < a.size() ; i ++ ) 
    {
        char c1 = a [ i ], c2 = a [ ( i + 1 ) % a.size() ] ;
        //此处改为整数变量int 也可以,string 会自动将其转换
        b +=  c1 + c2  ;
        //此时就不用给b开数组的位数了，直接用string加法即可
    }

    cout << b << endl ;

    return 0;
}