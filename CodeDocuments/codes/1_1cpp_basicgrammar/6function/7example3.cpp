#include <iostream>

using namespace std;

int gcd ( int a , int b )
{
    for ( int i = min ( a , b ) ;  ; i -- )
        if ( a % i == 0 && b % i == 0 ) return i ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    cout << gcd ( a , b ) << endl ;

    return 0;
}