#include <iostream>

using namespace std;

int resolution ( int n )
{
    if ( n == 1 ) return 1 ;

    if ( n == 2 ) return 2 ;

    return resolution ( n - 1 ) + resolution ( n - 2 ) ;
}

int main()
{
    int n ;
    cin >> n ;

    cout <<  resolution ( n ) << endl ;

    return 0;
}