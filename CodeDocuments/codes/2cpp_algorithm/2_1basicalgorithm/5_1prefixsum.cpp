//prefix_sum前缀和
#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;

int n , m ;
int a [ N ] , s [ N ] ;

int main()
{
    //此处完全当成数学意义上的数列处理原数组了
    scanf ( "%d%d" , &n , &m ) ;
    for ( int i = 1 ; i <= n ; i ++ ) 
        scanf ( "%d" , &a [ i ] ) ;
    
    for ( int i = 1 ; i <= n ; i ++ )
        s [ i ] = s [ i - 1 ] + a [ i ] ;
    
    return 0;
}