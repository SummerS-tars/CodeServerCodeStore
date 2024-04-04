#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    getline ( cin , s ) ;

    string a [ 100 ] ;
    int k = 0 ;
    for ( char c : s ) 
    {
        if ( c == ' ' ) 
        {
            k ++ ;
            continue;   
        }
        else a [ k ] += c ;
    }

    for ( int i = 0 ; i <= k ; i ++ ) 
        printf ( "%s " , a [ k - i ].c_str() ) ;

    return 0;
}