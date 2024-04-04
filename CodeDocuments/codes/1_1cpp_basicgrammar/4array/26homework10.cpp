#include <iostream>

using namespace std;

int main()
{
    for ( int n ; ; )
    {
        cin >> n ;
        int a [ n ] [ n ] ;
        a [ 0 ] [ 0 ] = 1 ;

        for ( int i = 0 ; i < n ; i ++ )
        {
            for ( int j = 1 ; j < n ; j ++ )
                a [ i ] [ j ] = a [ i ] [ j - 1 ] * 2;

            if ( i == n - 1 ) continue ;
            a [ i + 1 ] [ 0 ] = a [ i ] [ 0 ] * 2;

        }

        for ( int i = 0 ; i < n ; i ++ )
        {
            for ( int j = 0 ; j < n ; j ++ )
                cout << a [ i ] [ j ] << ' ' ;
            
            cout << '\n' ;
            
        }

        if ( n == 0 ) break ;
        cout << '\n' ;
    }

    return 0;
}