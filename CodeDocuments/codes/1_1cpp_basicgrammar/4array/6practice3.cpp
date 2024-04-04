//计算2^n n <= 10000
//设计知识点大数的数组储存方法，以及高精度运算
#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int a [ 10010 ] = { 1 } ;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        int t = 0;
        for ( int j = 1 ; j <= n ; j ++ )
        //一次乘法运算
        {
            int m = ( a [ j - 1 ] * 2 + t ) % 10 ;
            t = ( a [ j - 1 ] * 2 + t ) / 10 ;
            a [ j - 1 ] = m ;

        }
    }

    //如何有好方法知道有多少位数呢？
    int i = n ;
    for (  ;  ; i --)
        if ( a [ i ] != 0 ) break ;

    for ( ; i >= 0 ; i -- )
        cout << a [ i ] ;

    return 0;
}
//改进方法，有一个用一个！（还是要先估算最大使用位数）

