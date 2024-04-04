//讨论的优化方法
#include <iostream>

using namespace std;

int a [ 100 ] [ 100 ] ;

int main()
{
    int n , m ;
    cin >> n >> m ;

    int k = 2 , i = 0 , j = 0 ;

    a [ 0 ] [ 0 ] = 1 ;

    while ( k <= n * m ) 
    {
        while ( a [ i ] [ j + 1 ] == 0 && j + 1 < m ) a [ i ] [ ++ j ] = k ++ ;
        while ( a [ i + 1 ] [ j ] == 0 && i + 1 < n ) a [ ++ i ] [ j ] = k ++ ;
        while ( a [ i ] [ j - 1 ] == 0 && j > 0 ) a [ i ] [ -- j ] = k ++ ;
        while ( a [ i - 1 ] [ j ] == 0 && i > 0 ) a [ -- i ] [ j ] = k ++ ;

    }

    for ( int i = 0 ; i < n ; i ++ ) 
    {
        for ( int j = 0 ; j < m ; j ++ )
            printf ( "%d " , a [ i ] [ j ] ) ;

        printf ( "\n" ) ;

    }

    return 0 ;
    
}