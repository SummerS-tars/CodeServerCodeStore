#include <iostream>

using namespace std;

int main()
{
    for ( int N ; ; ) 
    {
        cin >> N ;
        int a [ N ] [ N ] ;
        for ( int i = 0 ; i < N ; i ++ )
        {    
            for ( int j = 0 ; j < N ; j ++ )
            {
                if ( i <= j && j <=  N - 1 - i ) a [ i ] [ j ] = i + 1;
                else if ( i > j && j <= N - 1 - i ) a [ i ] [ j ] = j + 1 ;
                else if ( i > j && j > N - 1 - i ) a [ i ] [ j ] = N - i ;
                else a [ i ] [ j ] = N - j  ;
                //建系并分块的思想

                cout << a [ i ] [ j ] << ' ' ;

            }
            cout << '\n' ;
        }

        if ( N == 0 ) break ;
        cout << '\n' ;
    }

    return 0;
}