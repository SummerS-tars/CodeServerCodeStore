#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str ;

    getline ( cin , str ) ;

    int sum = 0 ;
    for ( char c : str ) 
        if ( c >= '0' && c <= '9' ) sum ++ ;

    printf ( "%d" , sum ) ;

    return 0 ;
}