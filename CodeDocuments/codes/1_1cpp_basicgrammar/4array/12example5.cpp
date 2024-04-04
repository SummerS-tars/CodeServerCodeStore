#include <iostream>

using namespace std;

int main()
{
    char c ;
    cin >> c ;

    double M [ 12 ] [ 12 ] ;
    double sum = 0 ;
    for ( int i = 0 ; i < 12 ; i ++ ) 
        for ( int j = 0 ; j < 12 ; j ++ ) 
        {
            cin >> M [ i ] [ j ] ;
            if ( j > i ) sum += M [ i ] [ j ] ;

        }
    
    if ( c == 'S' ) printf ( "%.1lf" , sum ) ;
    else printf ( "%.1lf" , sum / 66 ) ;

    return 0;
}