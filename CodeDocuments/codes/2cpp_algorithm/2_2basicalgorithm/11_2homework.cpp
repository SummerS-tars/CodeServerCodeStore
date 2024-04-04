#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
char exp[ N ] ;
int tt ;

int main()
{
    string a ;
    getline( cin , a ) ;

    for ( auto c : a )
    {
        exp[ ++ tt ] = c ;
        
    }
}