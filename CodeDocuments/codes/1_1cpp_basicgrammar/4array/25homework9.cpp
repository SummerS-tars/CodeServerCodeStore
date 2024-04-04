#include <iostream> 

using namespace std;

int main()
{
    int n ;
    while ( cin >> n , n > 0 )
    {
        int a [ n ] [ n ] ;

        for ( int i = 0 ; i < n ; i ++ )
        {
            for ( int j = 0 ; j < n ; j ++ )
            {
                if ( i == j ) a [ i ] [ j ] = 1 ;
                else if ( i < j ) a [ i ] [ j ] = 1 + j - i ;
                else a [ i ] [ j ] = 1 + i - j ;
                
                cout << a [ i ] [ j ] << ' ' ;

            }

            cout << '\n' ;
        }

        cout << '\n' ;

    }

    return 0;
}