#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str ;

    getline ( cin , str ) ;

    for ( char &c : str ) cout << c << ' ' ;

    return 0 ;
}