#include <iostream>

using namespace std;

int main()
{
    int X [ 10 ] ;

    for ( int i = 1 ; i <= 10 ; i ++ )
    {
        int a ;
        cin >> a ;
        
        if ( a <= 0 ) X [ i - 1 ] = 1 ;
        else X [ i - 1 ] = a ;

    }

    for ( int i = 0 ; i < 10 ; i ++ )
        printf ( "X[%d] = %d\n" , i , X [ i ] ) ;

    return 0;
}