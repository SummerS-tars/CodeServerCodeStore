#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    while ( n -- )
    {
        string a, b ;
        cin >> a >> b ;
        string s [ 2 ] = { a , b } ;

        /*字符串向数字的转换
        其中 Hunter 0
        Gun 1 
        Bear 2 */
        int c [ 2 ] ;
        for ( int i = 0 ; i < 2 ; i ++ ) 
        {
            if ( s [ i ] == "Hunter" ) c [ i ] = 0 ;
            else if ( s [ i ] == "Gun" ) c [ i ] = 1 ;
            else c [ i ] = 2 ;
        }

        /*比较规律
        ( c[0] + 1 ) % 3 == c [1] 1 win 
        c [ 0 ] == c [ 1 ] tie */
        if ( c [0]  == c [1] ) puts ("Tie") ;
        else if ( ( c [ 0 ] + 1 ) % 3 == c [ 1 ] ) puts ( "Player1" ) ;
        else puts ( "Player2" ) ;
    }
    
    return 0;
}