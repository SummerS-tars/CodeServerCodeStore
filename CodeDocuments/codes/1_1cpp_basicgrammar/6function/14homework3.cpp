#include <iostream>

using namespace std;

int sum ( int l , int r )
{
    if ( l == r ) return l ;

    return r + sum ( l , r - 1 ) ;
}

int main()
{
    int l , r ;
    cin >> l >> r ;

    cout << sum ( l , r ) << endl ;

    return 0;
}