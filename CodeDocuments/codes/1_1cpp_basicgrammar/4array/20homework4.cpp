#include <iostream>

using namespace std;

int main()
{
    double M [ 12 ] [ 12 ] ;
    int C ;
    cin >> C ;
    char a ;
    cin >> a ;

    double sum = 0 ;
    for ( int i = 0 ; i < 12 ; i ++ )
    {
        for ( int j = 0 ; j < 12 ; j ++ )
        {
            cin >> M [ i ] [ j ] ;
            if ( j == C ) sum += M [ i ] [ j ] ;

        }

    } 

    if ( a == 'S' ) printf ( "%.1lf" , sum ) ;
    else printf ( "%.1lf" , sum / 12 ) ;

    return 0 ; 
}