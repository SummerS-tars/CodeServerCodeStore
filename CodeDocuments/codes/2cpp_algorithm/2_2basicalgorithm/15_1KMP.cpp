#include <iostream>

using namespace std;

const int N = 1e5 + 10 , M = 1e6 + 10 ;
char p[ N ] , s[ M ] ;
int ne[ N ] ;

int main()
{
    int n , m ; 
    scanf("%d" , &n ) ;
    cin >> p + 1 ;
    scanf("%d" , &m ) ;
    cin >> s + 1 ;
    
    /*思路：
    * 此时可以想象p字符串复制成了两份
    * i是主串的指针，j是核对串的指针(j = 0 表示核对串的虚拟头，其为最j第一个字符之前的位置)
    * 核对串在一定条件下沿着主串平移
    * 当主串当前字符与核对串符合，则i与j同时后移
    * 值得注意的是，j是已知符合部分的最后一个字符的指针，因此用于核对的是j+1所指的字符
    *
    * ne[] 的理解:
    * []中的是已核对的长度
    * ne[]所存的值是这个长度所对字符串的最长公共前后缀
    * 其代表当核对字符串之后不再符合的时候p可直接吻合的长度
    * 即让p[ j ] 直接与当前主串指针位置的前一个位置相对，然后开始匹配
    * 从而节约其中已经核对过的不用再核对的部分*/
    for ( int i = 2 , j = 0 ; i <= n ; i ++ )
    {
        while ( j && p[ i ] != p[ j + 1 ] ) j = ne[ j ] ;
        if ( p[ i ] == p[ j + 1 ] ) j ++ ;
        ne[ i ] = j ;
    }

    for ( int i = 1 , j = 0 ; i + n - 1 <= m ; i ++ )
    {
        while ( j && s[ i ] != p[ j + 1 ] ) j = ne[ j ] ;
        if ( s[ i ] == p[ j + 1 ] ) j ++ ;
        if ( j == n )
        {
            printf("%d ", i - j ) ;
            j = ne[ j ] ;
        }
    }

    return 0 ;
}