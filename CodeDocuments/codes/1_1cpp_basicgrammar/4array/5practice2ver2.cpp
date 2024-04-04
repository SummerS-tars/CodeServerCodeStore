#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n , k ;
    int a [ 100 ] ;

    cin >> n >> k ;
    for ( int i = 0 ; i < n ; i ++ )
        cin >> a [ i ] ;

    reverse( a , a + n ) ;
    reverse( a , a + n - k ) ;
    reverse( a + n - k , a + n ) ;

    for ( int i = 0 ; i < n ; i ++ )
        cout << a [ i ] << ' ' ;

    return 0;
}
//reverse 内也不要忘记写上数组的名称，顺序默认从0开始