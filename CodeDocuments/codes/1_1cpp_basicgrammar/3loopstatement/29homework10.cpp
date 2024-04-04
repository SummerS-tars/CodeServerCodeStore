#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin >> n ;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        bool judge = true ;
        int x ;
        cin >> x ;

        for ( int j = 2 ; j * j <= x ; j ++ )
        {
            if ( x % j == 0 )
            {
                judge = false ;
                break ;

            }

        }

        if ( judge == true ) printf ( "%d is prime\n" , x ) ;
        else printf ( "%d is not prime\n" , x ) ;

    }

    return 0;
}