#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;

    int a[ n ] ;
    //此处也可以不用如此紧张的范围，可以先看看n的范围，然后多定义几个
    for ( int i = 0 ; i < n ; i ++ )
        cin >> a[ i ] ;
    
    for (  ; n > 0 ; n -- )
    //或者预先处理n -- 再将范围改为n >= 0 并输出a[ n ] 
        cout << a[ n - 1 ] << ' ' ;

    return 0;

}