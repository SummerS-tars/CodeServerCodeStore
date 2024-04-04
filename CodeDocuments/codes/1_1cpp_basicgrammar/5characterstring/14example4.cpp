#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str [ 110 ] ;

    fgets ( str , 110 , stdin ) ;

    for ( int i = 0 , l = strlen ( str ) ; i < l ; i ++ ) 
        printf ( "%c " , str [ i ] ) ;

    return 0; 
}