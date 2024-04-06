#include <stdio.h>

int main()
{
    char s1[ 1000 ] = { '\0' }, s2[ 1000 ] = { '\0' } ;

    printf("请输入s1:(only letters & end with enter)");
    fgets( s1 , 1000 , stdin ) ;

    printf("\n请输入s2:(only letters & end with enter)");
    fgets( s1 , 1000 ,stdin ) ;

    int a[ 26 ] = { 0 } , A[ 26 ] = { 0 } ;
    for ( int i = 0 ; s2[ i ] ; i ++ )
    {
        if ( s2[ i ] >= 'A' && s2[ i ] <= 'Z' )
        A[ s2[ i ] - 'A' ] ++ ;
        else if ( s1[ i ] >= 'a' && s1[ i ] <='z' )
        A[ s2[ i ] - 'a' ] ++ ;
    }
}