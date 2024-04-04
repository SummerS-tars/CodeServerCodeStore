#include <iostream>

using namespace std;

int main()
{
    int x , y ;
    cin >> x >> y ;

    int i , stop ;
    if ( x > y ) i = y + 1 , stop = x ;
    else i = x + 1 , stop = y ;
    
    int sum = 0 ;
    for (  ; i < stop ; i ++ )
    {
        if ( abs(i % 2 ) == 1 ) sum += i ;
    }
    cout << sum << endl ;

    return 0 ;
}