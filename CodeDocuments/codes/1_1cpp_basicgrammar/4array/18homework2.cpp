#include <iostream>

using namespace std;

int main()
{
    long long f [ 70 ] ;
    //注意估算数据位数大小，而确定所要使用的变量种类及相关符号！！

    int t ;
    cin >> t ;

    f [ 0 ] = 0 , f [ 1 ] = 1 ;
    for ( int i = 2 ; i <= 60 ; i ++ )
        f [ i ] = f [ i - 1 ] + f [ i - 2 ] ;
    
    for ( int i = 1 ; i <= t ; i ++ )
    {
        int n ;
        cin >> n ;
        
        printf ( "Fib(%d) = %lld" , n , f [ n ] ) ;
    }

    return 0;
}
/*循环n次的简写方式
while ( n -- ) */