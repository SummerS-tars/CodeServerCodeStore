#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a ;
    getline ( cin , a );

    string b ;
    for ( char c : a ) b = b + c + ' ' ;

    cout << b << endl ;

    return 0 ;
}