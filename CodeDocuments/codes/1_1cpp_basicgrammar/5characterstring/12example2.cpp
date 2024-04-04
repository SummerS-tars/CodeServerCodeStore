#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str [ 110 ] ;

    fgets ( str , 110 , stdin ) ;

    int sum = 0 ;
    for ( int i = 0 , l = strlen( str ) ; i < l ; i ++ )
        if ( str [ i ] >= '0' && str [ i ] <= '9' ) sum ++ ;
        //由 str [ i ] - '0' <= 9 && str [ i ] - '0' >= 0 优化而来

    cout << sum << endl ;

    return 0;
}