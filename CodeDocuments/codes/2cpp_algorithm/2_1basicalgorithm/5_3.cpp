#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int a [ N ] , b [ N ] ;

int main()
{
    int n ;
    scanf ( "%d" , &n ) ;
    for ( int i = 1 ; i <= n ; i ++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
        b [ i ] = a [ i ] - a[ i - 1 ] ;
    }

    //此处b数列即a数列的差分
    //b的第i个前缀和即a [ i ]
    //差分存在的意义——降低对原数组的规模处理的时间复杂度
    
    //例如在a数组的l~r段进行统一+c的处理
    int l , r , c ;
    scanf ("%d%d%d" , &l , &r , &c ) ;
    b [ l ] += c ;
    b [ r + 1 ] -= c ;
    for ( int i = 1 ; i <= n ; i ++ )
        a [ i ] = a [ i - 1 ] + b [ i ] ;
}