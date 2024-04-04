#include <iostream>

using namespace std;

void sort ( int a [ ] , int l , int r )
{
    //选择排序法：依次使每个位数变为其到从其开始到尾的最小值
    for ( int i = l ; i <= r ; i ++ )
        for ( int j = i + 1 ; j <= r ; j ++ )
            if ( a [ i ] > a [ j ] ) swap ( a [ i ] , a [ j ] ) ;
}

int main ()
{
    int n , l , r ;
    cin >> n >> l >> r;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ ) cin >> a [ i ] ;

    sort ( a , l , r ) ;

    for ( int i = 0 ; i < n ; i ++ ) 
        cout << a [ i ] << ' ' ;

    return 0;
}