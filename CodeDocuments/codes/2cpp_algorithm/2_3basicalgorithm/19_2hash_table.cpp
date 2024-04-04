//拉链法——指每个节点可以拉好几个节点
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 3 ;
int h[ N ] , v[ N ] , ne[ N ] , idx = 1 ;

void insert ( int ) ;
bool query ( int ) ;

int main()
{
    int n ;
    scanf("%d" , &n ) ;

    while ( n -- )
    {
        int x ;
        char op[ 2 ] ;
        scanf("%s%d" , op , &x ) ;

        if ( *op == 'I' )
            insert ( x ) ;
        else
        {
            if ( query ( x ) ) puts("Yes") ;
            else puts("No") ;
        }
    }

    return 0 ;
}

void insert ( int x )
{
    int k = ( x % N + N ) % N ;
    v[ idx ] = x ;
    ne[ idx ] = h[ k ] ;
    h[ k ] = idx ++ ;
}

bool query ( int x )
{
    int k = ( x % N + N ) % N ;
    
    for ( int i = h[ k ] ; i ; i = ne[ i ] )
        if ( v[ i ] == x )
            return true ;

    return false ;
}