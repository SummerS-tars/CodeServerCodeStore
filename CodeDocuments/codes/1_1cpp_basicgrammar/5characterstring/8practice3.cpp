#include <iostream>
#include <cstring>

using namespace std;

char str [ 100000 ] ;

int main()
{
    cin >> str ;

    char c1 , c2 ;

    cin >> c1 >> c2 ;

    for ( int i = 0 ; str [ i ] ; i ++ )
        if ( str [ i ] == c1 ) str [ i ] = '#' ;
    
    cout << str << endl ;

    return 0;
}