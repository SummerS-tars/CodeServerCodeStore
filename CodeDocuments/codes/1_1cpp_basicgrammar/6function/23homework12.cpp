#include <iostream>

using namespace std;

int fact ( int n )
{
    if ( n == 1 ) return 1;

    return n * fact ( n - 1 )  ;
}

void full_array ( int a [ ] [ 9 ] , int n )
{
    if ( n == 1 ) 
    {
        a [ 0 ] [ 0 ] = 1 ;

        return ;
    }

    full_array ( a , n - 1 ) ;

    int k1 = fact ( n - 1 )  , k2 = fact ( n ) ;

    //继承n-1段，并构成基础段
    int b [ k1 ] [ n ] ;
    for ( int i = 0 ; i < k1 ; i ++ )
    {
        b [ i ] [ 0 ] = 1 ;   

        for ( int j = 1 ; j < n ; j ++ )
            b [ i ] [ j ] = a [ i ] [ j - 1 ] + 1 ;
    }
    for ( int i = 0 ; i < k1  ; i ++ )
        for ( int j = 0 ; j < n ; j ++ )
            a [ i ] [ j ] = b [ i ] [ j ] ;
    
    //基础段复制全段，并进行调整
    for ( int i = k1  ; i < k2 ; i ++ )
        for ( int j = 0 ; j < n ; j ++ )
            a [ i ] [ j ] = a [ i % k1  ] [ j ] ;

    for ( int i = k1  ; i < k2 ; i ++ )
        for ( int k = 1 ; k <= i / k1  ; k ++ )
        {   
            //重要的规律：依次对调
            int t1 = k , t2 = k + 1 ;
            for ( int j = 0 ; j < n ; j ++ )
                if ( a [ i ] [ j ] == t1 ) a [ i ] [ j ] = t2 ;
                else if ( a [ i ] [ j ] == t2 ) a [ i ] [ j ] = t1 ;
        }
}

int main ()
{
    int n ;
    cin >> n ;

    int x = fact ( n ) ;
    int a [ x ] [ 9 ] ;

    full_array ( a , n ) ;

    for ( int i = 0 ; i < x ; i ++ )
    {
        for ( int j = 0 ; j < n ; j ++ )
            cout << a [ i ] [ j ] << ' ' ;
        
        cout << endl ;
    }

    return 0;
}