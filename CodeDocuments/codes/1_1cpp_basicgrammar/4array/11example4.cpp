#include <iostream>

using namespace std;

int main()
{
    int L ;
    cin >> L ;
    char C ;
    cin >> C ;
    double M [ 12 ] [ 12 ] ;

    for ( int i = 0 ; i < 12 ; i ++ )
    {
        for ( int j = 0 ; j < 12 ; j ++ )
            cin >> M [ i ] [ j ] ;
    }

    double sum = 0 ;
    for ( int i = 0 ; i < 12 ; i ++ )
        sum += M [ L ] [ i ] ;

    if ( C == 'S' ) printf ( "%.1f" , sum ) ;
    else printf ( "%.1f" , sum / 12 ) ;

    return 0;
}