//DFS深度优先遍历，俗称暴力搜索法
//此种搜索方法的重点在于顺序
//本体为DFS在全排列中的运用
#include <iostream>

using namespace std;

void DFS ( int p , bool use[] , int n , int v[] ) ;

int main()
{
    int n ;
    scanf("%d" , &n ) ;

    bool use[ n ] = { false } ;
    int v[ n ] = { 0 } ;
    DFS ( 0 , use , n , v ) ;

    return 0 ;
}

void DFS ( int p , bool use[] , int n , int v[] )
{
    if ( p >= n )
    {
        for ( int i = 0 ; i < n ; i ++ )
            printf("%d " , v[ i ] ) ;
        puts("") ;
        return ;
    }

    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( ! use[ i ] )
        {
            v[ p ] = i + 1 ;
            use[ i ] = true ;
            DFS ( p + 1 , use , n , v ) ;
            use[ i ] = false ;
        }
    }
}