#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;

    int a [ n ] [ m ] ;
    int i = 0 , j = 0 , v = 1 ;
    int imove = n - 1 , jmove = m - 1 ;
    for ( int z = 1 ; ; z ++ )
    {
        
        for ( int k = 0 ; k <= jmove ; k ++ , j ++ , v ++ )
        {
            a [ i ] [ j ] = v ;
            if ( k == jmove ) break ;
        }
        if ( imove <= 0 ) break ;

        for ( int k = 0 ; k <= imove ; k ++ , i ++ , v ++ )
        {
            a [ i ] [ j ] = v ;
            if ( k == imove ) break ;
        }
        if ( z > 1 ) jmove -- ;
        imove -- ;
        if ( jmove <= 0 ) break ;

        for ( int k = 0 ; k <= jmove ; k ++ , j -- , v ++ )
        {
            a [ i ] [ j ] = v ;
            if ( k == jmove ) break ;
        }
        if ( imove <= 0 ) break;
        
        for ( int k = 0 ; k <= imove ; k ++ , i -- , v ++ )
        {
            a [ i ] [ j ] = v ;
            if ( k == imove ) break;
        }
        jmove -- , imove -- ;
        if ( jmove <= 0 ) break ;

    }

    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j ++ )
            cout << a [ i ] [ j ] << ' ' ;

        cout << '\n' ;
    }

    return 0;
}
/*关于此题暴力思路的解析：
基础思想：
1.可以将矩阵变化大循环分解为→↓←↑四步
2.给出两个移动步数变量，通过其周期性变化限制矩阵移动方向
3.通过判定移动变量的大小来结束矩阵
实现方法：
1.找出i&j的移动量的变化规律
2.给出一个赋值变量，进行记录、变化与赋值*/