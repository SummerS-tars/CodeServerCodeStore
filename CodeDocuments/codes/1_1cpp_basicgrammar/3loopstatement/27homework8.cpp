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
            //采取此种方法可以大幅度控制需要计算的除数的范围
            if ( x % j ==  0 )
            {
                if ( j != x / j ) sum = sum + j + x / j ;
                else sum += j ;

            }
            //利用整除的除数和商都是被除数的因数的性质，并排除了以上两个数相等而反复加的情况

        }

        if ( sum == x ) printf ("%d is perfect\n" , x ) ;
        else printf ( "%d is not perfect\n" , x ) ;

    }

    return 0;
}