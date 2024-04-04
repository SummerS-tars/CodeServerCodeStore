#include <iostream>

using namespace std;

void sort ( int a [ ] , int l , int r )
{
    int b [ r - l + 1 ] ;
    for ( int i = 0 ; i < r - l + 1 ; )
    {
        int min = 1000 ;
        for ( int j = l ; j <= r ; j ++ )
            if ( min > a [ j ] )
            {
                if ( i == 0 ) min = a [ j ] ;
                else if ( a [ j ] > b [ i - 1 ] ) min = a [ j ] ;
            }
        
        for ( int j = l ; j <= r ; j ++ )
            if ( a[ j ] == min ) b [ i ++ ] = a [ j ] ;
    }

    for ( int i = 0 ; i < r - l + 1 ; i ++ )
        a [ l + i ] = b [ i ] ;
}

int main ()
{
    int n , l , r ;
    cin >> n >> l >> r;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ ) cin >> a [ i ] ;

    sort ( a , l , r ) ;

    for ( int i = 0 ; i < n ; i ++ ) 
        cout << a [ i ] << ' ' ;

    return 0;
}