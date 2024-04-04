#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int x [ n ] ;
    for ( int i = 0 ; i < n ; i ++ )
        cin >> x [ i ] ;

    int m = x [ 0 ] , p = 0 ;  
    for ( int i = 1 ; i < n ; i ++ )
        if ( m > x [ i ] ) m = x[ i ] , p = i ;
    
    printf ("Minimum value: %d\nPosition: %d\n" , m , p ) ;
    
    return 0;
}