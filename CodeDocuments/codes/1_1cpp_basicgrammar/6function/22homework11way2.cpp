#include <iostream>

using namespace std;

int n , m , sum ;

void resolution ( int k1 , int k2 )
{
    if ( k1 == n || k2 == m ) sum ++ ;
    else if ( k1 < n && k2 < m )
    {
        resolution ( k1 + 1 , k2 ) ;
        resolution ( k1 , k2 + 1 ) ;
    }
}

int main()
{
    cin >> n >> m ;

    resolution ( 0 , 0 ) ;

    cout << sum << endl ;

    return 0;
}