//parameter passing（参数传递）
#include <iostream>

using namespace std;

int max ( int &x , int &y )
{
    if ( x > y ) return x;
    return y ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    cout << max ( a , b ) << endl ;

    return 0 ;
}