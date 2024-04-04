#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n ;
    while ( cin >> n , n > 0 ) ;
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
            bool stop = false ;
            for ( int j = 0 ; j < n ; j ++ )
            {
                if ( s [ j ] [ i ] == s [ 0 ] [ i ] ) sum ++ ;
                else
                {
                    stop = true ;
                    break ;
                }    

            }
            
            if ( stop ) break ;
        }

        for ( int i = 0 ; i < sum ; i ++ ) cout << s [ 0 ] [ i ] ;

        cout << endl ;
    }

    return 0;
}