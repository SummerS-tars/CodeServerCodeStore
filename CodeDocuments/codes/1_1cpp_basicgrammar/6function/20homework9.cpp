#include <iostream>

using namespace std;

void sort ( int a [ ] , int l , int r )
{
    /*实现思路：
    1.给出记录数组b
    2.给出记录值min，先遍历l~r段寻找最小值
    3.从min开始往上录入b
    4.l~r整理完之后，b返回录入到该段*/

    int b [ r - l + 1 ] ;
    int min = a[ l ] ;
    
    for ( int i = l ; i <= r ; i ++ )
        if ( min > a [ i ] ) min = a [ i ] ;

    for ( int i = 0 ; i < r - l + 1 ; min ++ )
        for ( int j = l ; j <= r ; j ++ )
            if ( a[ j ] == min ) b [ i ++ ] = a [ j ] ;
    /*逻辑解析：
    1.以min自增比对l~r段，相同则录入，并将b序号开启下一位
    2.当b录满了之后自动跳出循环*/
    //优化点：处理数比较多，且数之间相差较大的时候，浪费时间较多
    //优化想法：重新判定min值，而非让min自增

    for ( int i = 0 ; i < r - l + 1 ; i ++ )
        a [ l + i ] = b [ i ] ;
    //将b对应值返回a
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