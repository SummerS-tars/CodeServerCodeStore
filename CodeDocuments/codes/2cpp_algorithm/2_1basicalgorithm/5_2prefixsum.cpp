#include <iostream>

using namespace std;

const int N = 1010 ;
int n , m ;
int a [ N ] [ N ] , s [ N ] [ N ];

int main()
{
    scanf ("%d%d" , &n , &m ) ;
    for ( int i = 1 ; i <= n ; i ++ )
        for ( int j = 1 ; j <= m ; i ++ )
            scanf ("%d" , &a [ i ] [ j ] ) ;//此处认作矩阵比较贴切

    for ( int i = 1 ; i <= n ; i ++ )
        for ( int j = 1; j <= n ; j ++ )
            s [ i ] [ j ] = s [ i - 1 ] [ j ] + s [ i ] [ j - 1 ] - s [ i - 1 ] [ j - 1 ] + a [ i ] [ j ] ;
    
    return 0 ;
}