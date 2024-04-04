#include <iostream>

using namespace std;

int n , sum ;

void resolution ( int k )
{
    if ( k == n ) sum ++ ;
    else if ( k < n )
    {
        resolution ( k + 1 ) ;
        resolution ( k + 2 ) ;
    }
}
//走法模拟

int main () 
{
    cin >> n ;

    resolution ( 0 ) ;

    cout << sum << endl ;

    return 0;
}