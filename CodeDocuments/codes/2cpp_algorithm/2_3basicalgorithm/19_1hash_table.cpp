//判定质数的方法
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int N = 1e5 ;
    for ( int i = N ; ; i ++ )
    {
        bool is_prime = true ;
        for ( int j = 2 ; j * j <= N ; j ++ )
        {
            if ( i % j == 0 )
            {
                is_prime = false ;
                break ;
            }
        }

        if ( is_prime )
        {
            printf("%d" , i ) ;
            break ;
        }
    }

    return 0 ;
}