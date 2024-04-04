#include <iostream>
#include <cstring>

using namespace std;

int n [ 26 ] ;
char str [ 100010 ] ;

int main()
{
    cin >> str ;

    int l = strlen ( str ) ;

    for ( int i = 0 ; i < l ; i ++ ) 
    {
        int k = str [ i ] - 'a' ;
        n [ k ] ++ ;
    }

    for ( int i = 0 ; i < l ; i ++ )
    {
        int k = str [ i ] - 'a' ;
        
        if ( n [ k ] == 1 ) 
        {
            cout << str [ i ] << endl ;
            break ;
        }

        if ( i == l - 1 ) 
            cout << "no" << endl ;
    }

    return 0;
}