#include <iostream>

int main ()
{
    int sum = 1012522500 ;
    for ( int i = 45001 ; i <= 50000 ; i ++ )
    {
            sum += i ;
        
        printf ( "%d," , sum ) ;
    }

    return 0;
}