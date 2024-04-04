#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int p[ N ] ;

int find( int x )
{
    if ( p[ x ] != x ) p[ x ] = find( p[ x ] ) ;//查询父节点直至根节点，同时递归进行路径压缩
    return p[ x ] ;
}//重点：只有根节点的数组下标指针等于其本身的值

int main()
{
    int n , m ;
    scanf("%d%d" , &n , &m ) ;
    for( int i = 1 ; i <= n ; i ++ )
        p[ i ] = i ;

    while ( m -- )
    {
        int a , b ;
        char op[ 2 ] ;
        scanf("%s%d%d" , op , &a , &b ) ;//%s的读入方式可以防止很多缓冲区的一些多余的符号
        if ( *op == 'M' ) p[ find( a ) ] = p[ find( b ) ] ;
        else
            if ( find( a ) == find( b ) ) puts("Yes") ;
            else puts("No") ;
    }

    return 0 ;
}