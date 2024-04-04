#include <iostream>

using namespace std;

const int N = 20 ;

/*思路一:
以行为单位,逐步进经判定
最后一行放下后输出
之后再回溯寻找别的方案*/

int n ; 
char c[ N ][ N ] ;
bool col[ N ] , dg[ N ] , bdg[ N ] ;//rol[] 存储列的使用情况, dg[] 存储正对角线 , bdg[] 存储反对角线

/*对角线序号的计算方式
正对角线:n + i - j or n + j - i (计算方式保持一致)
反对角线:i + j
以上可以借助一元线性方程来表示*/

void dfs ( int ) ;

int main()
{
    scanf("%d" , &n ) ;
    for ( int i = 0 ; i < n ; i ++ )
        for ( int j = 0 ; j < n ; j ++ )
            c[ i ][ j ] = '.' ;

    dfs ( 0 ) ;
}

void dfs ( int r )//r 表示行序号
{
    if ( r == n )
    {
        for ( int i = 0 ; i < n ; i ++ )
            printf("%s\n" , c[ i ] ) ;
        puts("") ;
        return ;
    }

    for ( int i = 0 ; i < n ; i ++ )
        if ( !col[ i ] && !dg[ n + i - r ] && !bdg[ i + r ] )
        {
            col[ i ] = dg[ n + i - r ] = bdg[ i + r ] = true ;
            c[ r ][ i ] = 'Q' ;
            dfs ( r + 1 ) ;

            //恢复现场
            c[ r ][ i ] = '.' ;
            col[ i ] = dg[ n + i - r ] = bdg[ i + r ] = false ; 
        }
}