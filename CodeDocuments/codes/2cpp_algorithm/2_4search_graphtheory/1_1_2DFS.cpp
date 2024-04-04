#include <iostream>

const int N = 10 ;
int num[ N ] ;
bool used[ N ] ;
int n ;

void dfs ( int ) ;

int main()
{
    scanf("%d" , &n ) ;

    dfs ( 0 ) ;

    return 0 ;
}

void dfs ( int p ) 
{
    if ( p == n )
    {
        for ( int i = 0 ; i < n ; i ++ )
            printf("%d " , num[ i ] ) ;
        puts("") ;
        return ;
    }

    for ( int i = 0 ; i < n ; i ++ )
        if ( ! used[ i ] )
        {
            num[ p ] = i ;
            used[ i ] = true ;
            dfs ( p + 1 ) ;
            used[ i ] = false ;
        }

    return ;
}