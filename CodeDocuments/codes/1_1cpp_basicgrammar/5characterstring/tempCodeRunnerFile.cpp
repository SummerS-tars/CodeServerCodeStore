#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n ;
    while ( cin >> n , n ) ;
    {
        string s [ n ] ;
        for ( int i = 0 ; i < n ; i ++ )
        {
            cin >> s [ i ] ;
            reverse ( s , s + s [ i ].size() ) ;
        }

        int sum = 0 ;
        for ( int i = 0 ;  ; i ++ )
        {
            for ( int j = 0 ; j < n ; j ++ )
            {
                if ( s [ j ] [ i ] == s [ 0 ] [ i ] ) sum ++ ;
                else 
                {
                    break ;
                    break ;
                }
                
            }
        }

        for ( int i = 0 ; i < sum ; i ++ ) cout << s [ 0 ] [ i ] ;

        cout << endl ;
    }

    return 0;
}