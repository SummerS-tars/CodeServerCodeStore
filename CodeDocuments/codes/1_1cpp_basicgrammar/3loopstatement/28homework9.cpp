#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        int x ;
        cin >> x ;

        if ( x == 1 ) 
        {
            printf ("1 is not perfect\n") ;
            continue;
        }

        int sum = 1 ;
        for ( int j = 2 ; j < x ; j ++ )
        {
            if ( j > x / j ) break ; 
            if ( x % j ==  0 )
            {
                if ( j != x / j ) sum = sum + j + x / j ;
                else sum += j ;
            
            }

        }

        if ( sum == x ) printf ("%d is perfect\n" , x ) ;
        else printf ( "%d is not perfect\n" , x ) ;

    }

    return 0;
}