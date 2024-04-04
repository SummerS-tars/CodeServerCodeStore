#include <iostream>

using namespace std;

void print1D( int n , int a [] )
{
    for ( int i = 0 ; i < n ; i ++ )
        printf ( "%d " , a [i] ) ;
}

int main()
{
    int n , size ;
    cin >> n >> size ;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ )
        cin >> a [ i ] ;

    print1D ( size , a ) ;

    return 0;
}