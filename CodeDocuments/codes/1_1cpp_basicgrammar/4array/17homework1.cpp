#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n [ 20 ] ;

    for ( int i = 0 ; i < 20 ; i ++) 
        cin >> n [ i ] ;

    reverse(n , n + 20) ;

    for ( int i = 0 ; i < 20 ; i ++ )
        printf ( "N[%d] = %d" , i , n [ i ] ) ;

    return 0;
}
//还可以直接映射到另外一个数组之中，减少思维量