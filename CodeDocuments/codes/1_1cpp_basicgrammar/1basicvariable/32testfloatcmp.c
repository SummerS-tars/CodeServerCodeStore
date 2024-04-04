#include <stdio.h>
#include <math.h>

int main()
{
    double i = 1.1234566 ;
    double j = 1.1234567 ;
    if ( fabs( i - j ) < 1e-6 ) printf("yes") ;
    else printf("no") ;
    printf("\n") ;

    long long a = 99987654321 ;
    long long b = 99987644321 ;
    if ( fabs( i - 1 ) < fabs( a * 1e-6 ) ) printf("yes") ;
    else printf("no") ;

    return 0;
}