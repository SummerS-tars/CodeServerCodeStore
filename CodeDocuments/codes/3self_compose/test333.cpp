#include <iostream>

using namespace std;

int snake[ 100 ][ 100 ] ;

int main()
{
    int n , m ;
    cin >> n >> m ;
    
    int x = 0 , y = 0 ;
    int state = 0;

    int cnt = 1; 
    snake[ 0 ][ 0 ] = 1 ;
    while ( cnt < n * m )
    {
        if ( state == 0 && y + 1 < m && snake[ x ][ y + 1 ] == 0 ) 
        {
            snake[ x ][ ++ y ] = ++ cnt ;
            continue ;
        }
        else if ( state == 1 && x + 1 < n && snake[ x + 1 ][ y ] == 0 ) 
        {
            snake[ ++ x ][ y ] = ++ cnt ;
            continue;
        }
        else if ( state == 2 && y - 1 >= 0 && snake[ x ][ y - 1 ] == 0 ) 
        {
            snake[ x ][ -- y ] = ++ cnt ;
            continue ;
        }
        else if ( state == 3 && x - 1 >= 0 && snake[ x - 1 ][ y ] == 0 ) 
        {            
            snake[ -- x ][ y ] = ++ cnt ;
            continue ;
        }

        state = ( state + 1 ) % 4 ;
    }

    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j ++ )
            printf("%3d " , snake[ i ][ j ] ) ;
        puts("") ;
    }
}