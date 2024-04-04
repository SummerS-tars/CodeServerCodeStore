#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str [ 110 ] ;

    fgets ( str , 110 , stdin ) ;

    cout << strlen ( str ) << endl ;

    return 0;
}