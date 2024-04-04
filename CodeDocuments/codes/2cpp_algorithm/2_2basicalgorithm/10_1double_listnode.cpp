#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int v[ N ] , l[ N ] , r[ N ] , idx ;

//初始化
void init ()
{
    r[ 0 ] = 1 ;
    l[ 1 ] = 0 ;
    idx = 2 ;//此时从2开始为第一个节点
}

//多态化输入参数，统一右插法
//k为插入序号数，实际对应下标志应该+1（在输入参数时操作） ，x为要插入的值
//左插可以转换为右插
void add ( int k , int x ) 
{
    v[ idx ] = x ;
    l[ idx ] = k , r[ idx ] = r[ k ] ;
    l[ r[ k ] ] = idx , r[ k ] = idx ;
    idx ++ ;
    return ;
}

//删除操作
void del ( int k ) 
{
    r[ l[ k ] ] = r[ k ] ;//调整k的左节点的r
    l[ r[ k ] ] = l[ k ] ;//调整k的右节点的l
    return ;
}

//操作中转
void operation ( string op )
{
    if ( op == "L" )
    {
        int x ;
        scanf("%d" , &x ) ;
        add ( 0 , x ) ;//在0（左链头）操作
    }
    else if ( op == "R" ) 
    {
        int x ;
        scanf("%d" , &x ) ;
        add ( l[ 1 ] , x ) ;//在1（右链头）左侧的节点上操作
    }
    else if ( op == "D" )
    {
        int k ;
        scanf("%d" , &k ) ;
        del ( k + 1 ) ;
    }
    else if ( op == "IL" )
    {
        int k , x ;
        scanf("%d%d",  &k , &x ) ;
        add ( l[ k + 1 ] , x ) ;
    }
    else if ( op == "IR" ) 
    {
        int k , x ;
        scanf("%d%d" , &k , &x ) ;
        add ( k + 1 , x ) ;
    }

    return ;
}

int main()
{
    int m ;
    scanf("%d" , &m ) ;

    init() ;

    while( m -- )
    {
        string op ;
        cin >> op ;

        operation ( op ) ;
    }

    for ( int i = r[ 0 ] ; i != 1 ; i = r[ i ] )
        printf("%d " , v[ i ] ) ;

    return 0 ;
}