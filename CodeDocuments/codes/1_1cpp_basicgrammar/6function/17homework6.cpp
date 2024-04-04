#include <iostream>
#include <cstring>

using namespace std;

void print ( char str [ ] )
{
    int l = strlen ( str ) ;
    for ( int i = 0 ; i < l ; i ++ )
        cout << str [ i ] ;
}

int main()
{
    char str [ 110 ] ;
    fgets ( str , 110 , stdin ) ;
    //fgets会在结尾加上回车！！！

    print ( str ) ;

    return 0;
}