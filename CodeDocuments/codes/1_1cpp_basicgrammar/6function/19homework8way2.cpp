#include <iostream>

using namespace std;

int get_unique_count ( int a [ ] , int n )
{
    int sum = 0 ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        bool unique = true ;
        for ( int j = 0 ; j < i ; j ++ )
            if ( a [ i ] == a [ j ] )
            {
                unique = false ;
                break ;
            }
        //unique性判断
        
        if ( unique ) sum ++ ;
    }

    return sum ;
}

int main()
{
    int n ;
    cin >> n ;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ )
        cin >> a[ i ] ;
    
    cout << get_unique_count ( a , n ) << endl ;

    return 0;
}