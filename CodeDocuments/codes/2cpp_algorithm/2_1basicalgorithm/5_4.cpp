#include <iostream>

using namespace std;

const int N = 1010 ;
int a [ N ][ N] , b [ N ] [ N ] ;

int main ()
{
    int n , m ;
    scanf ( "%d%d" , &n , &m ) ;
    
    for ( int i = 1 ; i <= n ; i ++ )
        for ( int j = 1 ; j <= m ; j ++ )
        {
            scanf ( "%d" , &a [ i ] [ j ] ) ;
            b [ i ] [ j ] = a [ i ] [ j ] - a [ i - 1 ] [ j ] - a [ i ] [ j - 1 ] + a [ i - 1 ] [ j - 1 ] ;
        }
        //此处b矩阵即a矩阵的差分
    
    //二维差分处理,给出原矩阵a处理目标左上角坐标x1,y1以及右下角坐标x2,y2，统一进行+c处理
    int x1 , y1 , x2 , y2 ,c ;
    scanf ("%d%d%d%d%d" , &x1 , &y1 , &x2 , &y2 , &c ) ;
    b [x1][y1] += c ;
    b [ x1 ][ y2+1 ] -= c ;
    b [ x2+1 ][ y1 ] -= c ;
    b [ x2+1 ][ y2+1 ] += c ;
    for ( int i = 1 ; i <= n ; i ++ ) 
        for ( int j = 1 ; j <= m ; j ++ )
            a [i][j] = a [ i -1 ] [ j ] + a [ i ] [ j - 1] - a [ i -1 ] [ j - 1 ] + b [ i ] [ j ] ;
}