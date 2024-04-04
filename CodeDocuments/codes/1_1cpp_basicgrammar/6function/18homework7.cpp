#include <iostream>

using namespace std;

void reverse ( int a [ ] , int size ) 
{
    int b [ size ] ;
    for ( int i = 0 ; i < size ; i ++ )
        b [ size - 1 - i ] = a [ i ] ;
    for ( int i = 0 ; i < size ; i ++ )
        a [ i ] = b [ i ] ;
}

int main ()
{
    int n , size ;
    cin >> n >> size ;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ ) cin >> a [ i ] ;

    reverse ( a , size ) ;

    for ( int i = 0 ; i < n ; i ++ )
        cout << a [ i ] << ' ' ;

    return 0;
}