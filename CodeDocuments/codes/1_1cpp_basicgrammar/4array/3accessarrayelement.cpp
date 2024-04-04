//输出斐波那契数列的第n项,n<=50 ;
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int f[60] ;
    //多定义一些范围，防止越界

    f[0] = 0 , f[1] = 1 ;
    for ( int i = 2 ; i <= 50 ;  i ++ ) 
        f[ i ] = f[ i - 1 ] + f[ i - 2 ] ;

    int n ;
    cin >> n ;
    cout << f[n] << endl ;
    //!!!Warning : f[n] 从 0 开始！！！
    //在f[n]中写入n即可得到数组中的第n+1个元素！！！

    return 0 ;
}