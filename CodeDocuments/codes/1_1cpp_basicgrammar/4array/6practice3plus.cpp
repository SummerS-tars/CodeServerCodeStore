#include <iostream> 

using namespace std;

int main()
{
    int d , n ;
    cin >> d >> n ;

    int N = ( d / 10 + 1 ) * n ;
    int a [ N ] = { 1 } ;

    int m = 1 , t = 0 ;
    for ( int i = 1 ; i <= n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j ++ )
        {
            int x = ( a [ j ] * d + t ) % 10 ;
            t = ( a [ j ] * d + t ) / 10 ;
            a [ j ] = x ;

        }
        if ( t > 0 ) a [ m ++ ] = t ;
        //最大一位要进位时，另外单独开一次并赋值
        t = 0 ;

    }

    for ( int i = m - 1 ; i >= 0 ; i -- )
        cout << a [ i ] ;

    return 0;

}