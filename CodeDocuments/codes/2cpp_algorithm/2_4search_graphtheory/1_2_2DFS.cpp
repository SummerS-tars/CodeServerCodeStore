#include <iostream>

using namespace std;

const int N = 20 ;

/*思路二:
更加原始的思路
以给个格子为单位进行分枝判断
分为不放或者判断可放后放下
最后输出,再回溯寻找下一种情况*/

int n ;
char c[ N ][ N ] ;
bool row[ N ] , col[ N ] , dg[ N ] , bdg[ N ] ;

//dfs参数顺序( 横坐标, 纵坐标 , 皇后的数量 )
void dfs ( int , int , int ) ;

int main()
{
    scanf("%d" , &n ) ;
    for ( int i = 0 ; i < n ; i ++ )
        for ( int j = 0 ; j < n ; j ++ )
            c[ i ][ j ] = '.' ;

    dfs ( 0 , 0 , 0 ) ;

    return ;
}

void dfs ( int i , int j , int num )
{
    if ( j == n ) j = 0 , i ++ ;//j越界后转入下一行
    if ( i == n )
    {
        if ( num == n )//只要放满了n个皇后就说明找到了一种结果了
        {
            for ( int k = 0 ; k < n ; k ++ )
                puts( c[ i ] ) ;
            puts("") ;
        }
        return ;
    }

    //不放
    dfs ( i , j + 1 , num ) ;

    //符合条件时放
    if ( !row[ i ] && !col[ j ] && !dg[ n + i - j ] && !bdg[ i + j ] )
    {
        c[ i ][ j ] = 'Q' ;
        row[ i ] = col[ j ] = dg[ n + i - j ] = bdg[ i + j ] = true ;
        dfs ( i , j + 1 , num + 1 ) ;
        c[ i ][ j ] = '.' ;
        row[ i ] = col[ j ] = dg[ n + i - j ] = bdg[ i + j ] = false ;
    }

    return ;
}