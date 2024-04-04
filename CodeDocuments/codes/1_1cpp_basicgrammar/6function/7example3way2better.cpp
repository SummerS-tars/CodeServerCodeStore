/*辗转相除法原理*/
#include <iostream>

using namespace std;

int gcd ( int a , int b )
{
    if ( a % b == 0 ) return b ;
    return gcd ( b , a % b ) ;
}

int main ()
{
    int a , b ;
    cin >> a >> b ;

    if ( a < b ) swap ( a, b ) ;
    cout << gcd ( a , b ) << endl ;

    return 0;
}