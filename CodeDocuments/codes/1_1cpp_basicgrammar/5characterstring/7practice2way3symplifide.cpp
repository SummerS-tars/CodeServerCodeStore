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
        n [ str [ i ] - 'a' ] ++ ;
    
    for ( int i = 0 ; i < l ; i ++ ) 
        if ( n [ str [ i ] - 'a' ] == 1 ) 
        {
            cout << str [ i ] << endl ;

            return 0;
            /*没见过的用法：
            程序中一旦执行return 0则程序结束*/
        }
    
    puts ("no");

    return 0;
}