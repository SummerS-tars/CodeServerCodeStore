#include <iostream>

using namespace std;

int resolution ( int n , int m )
{
    if ( n == 0 || m == 0 ) return 1 ;

    return resolution ( n - 1 , m ) + resolution ( n , m - 1 ) ;
}

int main()
{
    int n , m ;
    cin >> n , m ;

    cout << resolution ( n , m ) << endl ;

    return 0;
}