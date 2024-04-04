#include <iostream>

using namespace std;

int lcm ( int a , int b )
{
    for ( int i = max ( a, b ) ; ; i ++ )
        if ( i % a == 0 && i % b == 0 ) return i ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    cout << lcm ( a , b ) << endl ;

    return 0;
}